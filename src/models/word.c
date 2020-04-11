#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../../includes/word.h"
#include "../../includes/line.h"

int words = 0;

struct Word *newWord(char word[255])
{
    struct Word *new_word;
    new_word = (struct Word *) malloc(sizeof(struct Word));

    memcpy(new_word->word, word, strlen(word));
    new_word->freq_absolute=0;
    new_word->in_quartil=0;

    return new_word;
}

void showWordList(struct Word **list)
{
    struct Word *current = *list;

    while(current != NULL)
    {
        printf("| %s", current->word);
        printf(" | ");
        printf("Freq. Abs : %d", current->freq_absolute);
        printf(" | ");
        printf("Quartil : %d|\n", current->in_quartil);

        current = current->next;
    }
}

void getWordInfo(struct Word **list, char word[MAX_BUFFER_SIZE])
{
	struct Word *current = *list;

	while (current != NULL)
	{
		if(strcmp(current->word , word) == 0)
		{
			printf("\nWord : %s\n", current->word);
			printf("Freq. Abs : %d\n", current->freq_absolute);
			printf("Quartil : %d\n", current->in_quartil);

			return;
		}
		current = current->next;
	}
}

void setWordQuartil(struct Word **list)
{
	if(*list == NULL)
		return;

	struct Word *current = *list;

	int q1 = (words + 1) / 4;
	int q3 = (3*(words + 1)) / 4;
	int i = 0;

	while(current != NULL)
	{
		if(i<q1)
			current->in_quartil = 1;
		else if(i>=q3)
			current->in_quartil = 3;
		else
			current->in_quartil = 2;

		current = current->next;
		i++;
	}

}

void appendToWordList(struct Word **list, struct Word *new_word) {
	struct Word *current = *list;
	words++;

	// First element to be inserted in the list
	if(*list == NULL)
	{
		*list=new_word;
		return;
	}
	// New element smaller than first of the list
	if(current->freq_absolute > new_word->freq_absolute)
	{
		new_word->next = current;
		current->prev = new_word;
		*list = new_word;
		return;
	}

	while(current->next != NULL)
	{
		if(current->next->freq_absolute > new_word->freq_absolute)
		{
			new_word->prev = current;
			new_word->next = current->next;
			current->next = new_word;
			current->next = new_word;
			return;
		}
		current = current->next;
	}

	if(current->freq_absolute > new_word->freq_absolute)
	{
		new_word->prev = current;
		new_word->next = current->next;
		current->next = new_word;
		current->next = new_word;
		return;
	}
	new_word->prev = current;
	current->next = new_word;
}

int checkIfWordIsDuplicated(struct Word **list, char word[MAX_BUFFER_SIZE])
{
    struct Word *current = *list;

    while (current != NULL)
    {
        if(strcmp(current->word, word) == 0)
			return 1;
        current = current->next;
    }
    return 0;
}

void makeWordList(struct Line **list, struct Word **word_list)
{
    if (*list == NULL)
        return;

    struct Line *current = *list;

    while (current != NULL)
    {
        current->word->duplicated = checkIfWordIsDuplicated(word_list, current->word->word);
        if(current->word->duplicated == 0)
			appendToWordList(word_list, current->word);

        current = current->next;
    }
}

void calcWordFrequenciesAbsolute(struct Line **list)
{
    if(*list == NULL)
        return;

    struct Line *current = *list;
    struct Line *current2 = *list;

    while (current != NULL)
    {
        while (current2 != NULL)
        {
            if(strcmp(current->word->word , current2->word->word) == 0)
                current->word->freq_absolute++;

            current2 = current2->next;
        }
        current2 = *list;
        current = current->next;
    }

}

void calcWordQuartil(struct Line **list, struct Word **word_list, char word[MAX_BUFFER_SIZE])
{
    calcWordFrequenciesAbsolute(list);

    makeWordList(list, word_list);

    setWordQuartil(word_list);

    //showWordList(word_list);

	getWordInfo(word_list, word);
}
