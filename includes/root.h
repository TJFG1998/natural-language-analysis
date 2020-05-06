//
// Created by tiago on 09/04/2020.
//

#ifndef TPAEDII_ROOT_H
#define TPAEDII_ROOT_H

#include "auxiliary.h"

struct Root {
    char origin[MAX_BUFFER_SIZE];
    long freq_absolute;
    float freq_relative;
    long freq_acumulated;
};

struct Root *newRoot(char origin[MAX_BUFFER_SIZE]);

#endif
