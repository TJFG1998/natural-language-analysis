#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../../includes/size.h"

struct Size *newSize(char word[MAX_BUFFER_SIZE])
{
    struct Size *new_size;
    new_size = (struct Size *) malloc(sizeof(struct Size));

    new_size->numberLetters=strlen(word);
    new_size->freq_absolute=0;
    new_size->freq_relative=0;
    new_size->freq_acumulated_absolute=0;
    new_size->freq_acumulated_relative=0;
    new_size->duplicated=0;
    new_size->next=NULL;
    new_size->prev=NULL;

    TOTAL_LETTERS += new_size->numberLetters;

    return new_size;
}

// Construct a list of size
void makeSizeList(struct Line **list, struct Size **size_list)
{
    if(*list == NULL)
        return;

    struct Line *current = *list;

    while(current != NULL)
    {
        current->size->duplicated = checkIfSizeIsDuplicated(size_list, current->size->numberLetters);
        //if(current->size->duplicated == 0)
        appendToSizeList(size_list, current->size);
        current = current->next;
    }
}

// Add a Size to the end of the sizes list.
void appendToSizeList(struct Size **list, struct Size *new_size)
{
    struct Size *current = *list;

	// First element to be inserted in the list
	if(*list == NULL)
	{
		*list=new_size;
		return;
	}
	// New element smaller than first of the list
	if(current->freq_absolute > new_size->freq_absolute)
	{
		new_size->next = current;
		current->prev = new_size;
		*list = new_size;
		return;
	}

	while(current->next != NULL)
	{
		if(current->next->freq_absolute > new_size->freq_absolute)
		{
			new_size->prev = current;
			new_size->next = current->next;
			current->next = new_size;
			current->next = new_size;
			return;
		}
		current = current->next;
	}

	if(current->freq_absolute > new_size->freq_absolute)
	{
		new_size->prev = current;
		new_size->next = current->next;
		current->next = new_size;
		current->next = new_size;
		return;
	}
	new_size->prev = current;
	current->next = new_size;
}

// Print the sizes list in table fromat.
void showSizesList(struct Size **size_list)
{
    struct Size *current = *size_list;

    while(current != NULL)
    {
        if(current->duplicated == 0)
        {
            printf("|%d ", current->numberLetters);
            printf(" | ");
            printf("freq_abs %ld", current->freq_absolute);
            printf(" | ");
            printf("freq_rel %lf", current->freq_relative);
            printf(" | ");
            printf("freq_acum_abs %ld", current->freq_acumulated_absolute);
            printf(" | ");
            printf("freq_acum_rel %f|\n", current->freq_acumulated_relative);
        }
        current = current->next;
    }
}

// Given a list of sizes and a value verify if already in the list
int checkIfSizeIsDuplicated(struct Size **list, int size)
{
    struct Size *current = *list;

    while (current != NULL)
    {
        if(current->numberLetters == size)
            return 1;
        current = current->next;
    }
    return 0;
}

/*
 * Calculate the frequency absolute of the elements of a given list.
 * @params
 *     - list, struct Line**, list of lines
 */
void calcSizeFrequenciesAbsolute(struct Line **list) {
    if(*list == NULL)
        return;

    struct Line *current = *list;
    struct Line *current2 = *list;

    while (current != NULL)
    {
        while (current2 != NULL)
        {
            if(current->size->numberLetters == current2->size->numberLetters)
                current->size->freq_absolute++;

            current2 = current2->next;
        }
        current2 = *list;
        current = current->next;
    }

}

// Calculate the relative frequency
void calcSizeFrequenciesRelative(struct Size **list)
{
    if(*list == NULL)
        return;

    struct Size *current = *list;

    while (current != NULL)
    {
        current->freq_relative = (float)current->freq_absolute/ (float)TOTAL_LINE_IN_LIST;
        current = current->next;
    }
}

// Calculate he accumulated frequency of sizes
void calcSizeFrequenciesAcumolated(struct Size **list)
{
    if(*list == NULL)
        return;

    struct Size *current = *list;
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

void calcSizeArithematics(struct Size **list)
{
    if(*list == NULL)
		return;

    struct Size *current = *list;
    struct Size *current2 = *list;
    struct Size *p = *list;
    int mode = 0, max_mode = 0, i = 0;

    int half =(int)(TOTAL_LINE_IN_LIST / 2);
    WORD_SIZE_MEDIAN_2 = 0; //Default value in case os and even list size
    WORD_LENGTH_AVG = (float)TOTAL_LETTERS / (float)TOTAL_LINE_IN_LIST; // Calculation of word size average

    float sd_sum = 0;

    while(current->next != NULL)
    {
        mode = 0;
        sd_sum += (current->numberLetters-WORD_LENGTH_AVG)*(current->numberLetters-WORD_LENGTH_AVG);

        while(current2 != NULL)
        {
            if(current->numberLetters == current2->numberLetters)
                mode++;
            current2 = current2->next;
        }

        if(mode > max_mode)
        {
            WORD_SIZE_MODE = current->numberLetters;
            max_mode = mode;
        }

        current2 = *list;
        current = current->next;
    }

	do{
		i++;
		p = p->next;
	}while(p->next != NULL && i < half);

	if(p->next != NULL)
	{
		if(TOTAL_LINE_IN_LIST % 2 == 0)
		{
			WORD_SIZE_MEDIAN_1 = p->numberLetters;
			WORD_SIZE_MEDIAN_2 = p->next->numberLetters;
		}
		else
			WORD_SIZE_MEDIAN_1 = p->numberLetters;
	}

    WORD_SIZE_STANDARD_DEVIATION = (sd_sum / TOTAL_LINE_IN_LIST) * 0.5;

    printf("Average : %f\n", WORD_LENGTH_AVG);
    printf("Mode : %d\n", WORD_SIZE_MODE);
    printf("Median : %d\n", WORD_SIZE_MEDIAN_1);

    if(TOTAL_LINE_IN_LIST % 2 == 0)
        printf("or Median : %d\n", WORD_SIZE_MEDIAN_2);

    printf("Standard Deviaton : %f\n", WORD_SIZE_STANDARD_DEVIATION);
}

// Calculate all
void calcSizeFrequencies(struct Line **list, struct Size **size_list)
{
    calcSizeFrequenciesAbsolute(list);

    makeSizeList(list, size_list);

    calcSizeFrequenciesRelative(size_list);

    calcSizeFrequenciesAcumolated(size_list);

    calcSizeArithematics(size_list);

    showSizesList(size_list);
}
