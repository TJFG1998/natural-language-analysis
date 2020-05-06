#ifndef TPAEDII_SIZE_H
#define TPAEDII_SIZE_H

#include "auxiliary.h"
#include "line.h"

int TOTAL_LETTERS;// total of leers found in the word

struct Size {
    int numberLetters;
    long freq_absolute;
    float freq_relative;
    long freq_acumulated_absolute;
    float freq_acumulated_relative;
    int duplicated;

    struct Size *prev;
    struct Size *next;
};

struct Size *newSize(char word[MAX_BUFFER_SIZE]);
void appendToSizeList(struct Size **list, struct Size *new_size);
void showSizesList(struct Size **size_list);
int checkIfSizeIsDuplicated(struct Size **list, int size);
void calcSizeFrequenciesAbsolute(struct Line **list);
void calcSizeFrequenciesRelative(struct Size **list);
void calcSizeFrequenciesAcumolated(struct Size **list);
void calcSizeFrequencies(struct Line **list, struct Size **size_list);
void calcSizeArithematics(struct Size **list);

#endif
