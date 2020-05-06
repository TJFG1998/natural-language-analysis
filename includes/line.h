#ifndef TPAEDII_LINE_H
#define TPAEDII_LINE_H

#include "auxiliary.h"
#include "word.h"
#include "size.h"
#include "root.h"
#include "morph.h"
#include "certainty.h"

int TOTAL_LINE_IN_LIST;
float WORD_LENGTH_AVG;
int WORD_SIZE_MODE;
float WORD_SIZE_STANDARD_DEVIATION;
int WORD_SIZE_MEDIAN_1;
int WORD_SIZE_MEDIAN_2;

struct Line{
    struct Word *word;
    struct Size *size;
    struct Root *root;
    struct Morpho *morph;
    struct Certainty *assert;

    struct Line *prev;
    struct Line *next;
};

// Create a new line struct
struct Line * newLine(char column_one[MAX_BUFFER_SIZE], char column_two[MAX_BUFFER_SIZE],
                        char column_three[MAX_BUFFER_SIZE], char column_four[MAX_BUFFER_SIZE]);
void appendToLinesList(struct Line **list, struct Line *new_line);

#endif
