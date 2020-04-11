#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../../includes/morph.h"

struct Morpho *newMorpho(char category[MAX_BUFFER_SIZE])
{
    struct Morpho *new_morf;
    new_morf = (struct Morpho *) malloc(sizeof(struct Morpho));

    memcpy(new_morf->category, category,  strlen(category));
    new_morf->freq_acumulated_absolute=0;
    new_morf->freq_acumulated_relative=0;
    new_morf->freq_absolute=0;
    new_morf->freq_relative=0;
    new_morf->certainty_agv=0;
    new_morf->duplicated=0;
    new_morf->next=NULL;
    new_morf->prev=NULL;

    return new_morf;
}

void showMorphoList(struct Morpho **morf_list)
{
    struct Morpho *current = *morf_list;

    while(current != NULL)
    {
        printf("|%s ", current->category);
        printf(" | ");
        printf("freq_abs %ld", current->freq_absolute);
        printf(" | ");
        printf("freq_rel %lf", current->freq_relative);
        printf(" | ");
        printf("freq_acum_abs %ld", current->freq_acumulated_absolute);
        printf(" | ");
        printf("freq_acum_rel %f", current->freq_acumulated_relative);
        printf(" | ");
        printf("cat_certainty %f", current->certainty_agv);
        printf(" | ");
        printf("cat_certainty_sd %f|\n", current->certainty_sd);

        current = current->next;
    }
}

void appendToMorfList(struct Morpho **list, struct Morpho *new_morph)
{
    struct Morpho *current = *list;

	// First element to be inserted in the list
    if(*list == NULL)
    {
        *list=new_morph;
        return;
    }
    // New element smaller than first of the list
	if(current->freq_absolute > new_morph->freq_absolute)
	{
		new_morph->next = current;
		current->prev = new_morph;
		*list = new_morph;
		return;;
	}

	while(current->next != NULL)
	{
		if(current->next->freq_absolute > new_morph->freq_absolute)
		{
			new_morph->prev = current;
			new_morph->next = current->next;
			current->next = new_morph;
			current->next = new_morph;
			return;
		}
		current = current->next;
	}

	if(current->freq_absolute > new_morph->freq_absolute)
	{
		new_morph->prev = current;
		new_morph->next = current->next;
		current->next = new_morph;
		current->next = new_morph;
		return;
	}
	new_morph->prev = current;
	current->next = new_morph;
}

int checkIfMorphoIsDuplicated(struct Morpho **list, char category[MAX_BUFFER_SIZE])
{
    struct Morpho *current = *list;

    while (current != NULL)
    {
        if(strcmp(current->category , category) == 0)
            return 1;
        current = current->next;
    }
    return 0;
}

void ordenateMorfList(struct Line **line_list, struct Morpho **list)
{

    if (*line_list == NULL)
        return;

    struct Line *current = *line_list;

    while (current != NULL)
    {
        current->morph->duplicated = checkIfMorphoIsDuplicated(list, current->morph->category);
        if(current->morph->duplicated == 0)
            appendToMorfList(list, current->morph);
        current = current->next;
    }
}

void calcMorphoFrequenciesAbsolute(struct Line **list)
{
    if(*list == NULL)
        return;

    struct Line *current = *list;
    struct Line *current2 = *list;

    while (current != NULL)
    {
        while (current2 != NULL)
        {
            if(strcmp(current->morph->category , current2->morph->category) == 0)
                current->morph->freq_absolute++;

            current2 = current2->next;
        }
        current2 = *list;
        current = current->next;
    }

}

void calcMorphoFrequenciesRelative(struct Morpho **list)
{
    if(*list == NULL)
        return;

    struct Morpho *current = *list;

    while (current != NULL)
    {
        current->freq_relative = (float)current->freq_absolute/ (float)TOTAL_LINE_IN_LIST;
        current = current->next;
    }
}

void calcMorphoFrequenciesAcumolated(struct Morpho **list)
{
    if(*list == NULL)
        return;

    struct Morpho *current = *list;
    long acumolated_abs = 0;
    float acumolated_rel = 0;

    while (current != NULL)
    {
        if(current->duplicated == 0)
        {
            acumolated_abs += current->freq_absolute;
            acumolated_rel += current->freq_relative;

            current->freq_acumulated_absolute = acumolated_abs;
            current->freq_acumulated_relative = acumolated_rel;
        }

        current = current->next;
    }
}

void calcMorphoSDCertainty(struct Line **list, struct Morpho **morf_list)
{
    if(*list == NULL || *morf_list == NULL)
        return;

    struct Morpho *current = *morf_list;
    struct Line *current2 = *list;

    float sd_sum = 0;

    while(current != NULL)
    {
        sd_sum = 0;
        while(current2 != NULL)
        {
            if(current->category == current2->morph->category)
                sd_sum += (current2->assert->value - current->certainty_agv)*(current2->assert->value - current->certainty_agv);

            current2 = current2->next;
        }
        current->certainty_sd = (sd_sum / current->freq_absolute) * 0.5 ;

        current2 = *list;
        current = current->next;
    }
}

void calcMorphoAvgCertainty(struct Line **list, struct Morpho **morf_list)
{
    if(*list == NULL || *morf_list == NULL)
        return;

    struct Morpho *current = *morf_list;
    struct Line *current2 = *list;

    float total_certainey_category = 0;

    while(current != NULL)
    {
        total_certainey_category = 0;
        while(current2 != NULL)
        {
            if(current->category == current2->morph->category)
                total_certainey_category += current2->assert->value;

            current2 = current2->next;
        }
        current->certainty_agv = total_certainey_category / current->freq_absolute;

        current2 = *list;
        current = current->next;
    }
}

void calcMorphoFrequencies(struct Line **list, struct Morpho **morf_list)
{
    calcMorphoFrequenciesAbsolute(list);

    ordenateMorfList(list, morf_list);

    calcMorphoFrequenciesRelative(morf_list);

    calcMorphoFrequenciesAcumolated(morf_list);

    calcMorphoAvgCertainty(list, morf_list);

    calcMorphoSDCertainty(list, morf_list);

    showMorphoList(morf_list);
}
