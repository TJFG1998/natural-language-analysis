#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../includes/line.h"
#include "../../includes/word.h"
#include "../../includes/size.h"
#include "../../includes/root.h"
#include "../../includes/morph.h"
#include "../../includes/certainty.h"

// Create a new line struct
struct Line * newLine(char column_one[MAX_BUFFER_SIZE],
                      char column_two[MAX_BUFFER_SIZE],
                      char column_three[MAX_BUFFER_SIZE],
                      char column_four[MAX_BUFFER_SIZE])
{
    struct Line *new_line;
    new_line = (struct Line *) malloc(sizeof(struct Line));
    new_line->next = NULL;
    new_line->prev = NULL;

    struct Word *new_word;
    new_word = newWord(column_one);
    new_line->word=new_word;

    struct Size *new_size;
    new_size = newSize(column_one);
    new_line->size=new_size;

    struct Root *new_root;
    new_root = newRoot(column_two);
    new_line->root=new_root;

    struct Morpho *new_morf;
    new_morf = newMorpho(column_three);
    new_line->morph=new_morf;

    struct Certainty *new_cert;
    new_cert = newCert(column_four);
    new_line->assert=new_cert;

    return new_line;
}

// Append a new line to he list.
void appendToLinesList(struct Line **list, struct Line *new_line)
{
    if(*list == NULL){
        *list = new_line;
        TOTAL_LINE_IN_LIST++;
        return;
    }

    struct Line *current = *list;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = new_line;
    new_line->prev=current;
    TOTAL_LINE_IN_LIST++;
}
