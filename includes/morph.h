#ifndef TPAEDII_MORPH_H
#define TPAEDII_MORPH_H

#include "auxiliary.h"
#include "line.h"

struct Morpho {
    char category[MAX_BUFFER_SIZE];
    long freq_absolute;
    float freq_relative;
    long freq_acumulated_absolute;
    float freq_acumulated_relative;
    float certainty_agv;
    float certainty_sd;
    int duplicated; // if 1 means that this category is repeated

    struct Morpho *next;
    struct Morpho *prev;
};

struct Morpho *newMorpho(char category[MAX_BUFFER_SIZE]);
void calcMorphoFrequenciesAbsolute(struct Line **list);
void calcMorphoFrequenciesRelative(struct Morpho **list);
void calcMorphoFrequenciesAcumolated(struct Morpho **list);
void calcMorphoFrequencies(struct Line **list, struct Morpho **morf_list);
void showMorphoList(struct Morpho **morf_list);
int checkIfMorphoIsDuplicated(struct Morpho **list, char category[MAX_BUFFER_SIZE]);

#endif
