#ifndef TPAEDII_WORD_H
#define TPAEDII_WORD_H

#include "auxiliary.h"
#include "line.h"

struct Word {
    char word[MAX_BUFFER_SIZE];
    int freq_absolute;
    int in_quartil;
    int duplicated;

    struct Word *next;
    struct Word *prev;
};

struct Word *newWord(char word[MAX_BUFFER_SIZE]);
void appendToWordList(struct Word **list, struct Word *new_word);
void calcWordQuartil(struct Line **list, struct Word **word_list, char word[MAX_BUFFER_SIZE]);
int checkIfWordIsDuplicated(struct Word **list, char word[MAX_BUFFER_SIZE]);


#endif
