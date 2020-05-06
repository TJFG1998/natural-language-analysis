#ifndef TPAEDII_CERTAINTY_H
#define TPAEDII_CERTAINTY_H

#include "auxiliary.h"
#include "line.h"

struct Certainty {
    double value;

    struct Certainty *next;
};

struct Certainty *newCert(char value[MAX_BUFFER_SIZE]);
void makeCertaintyList(struct Line **list, struct Certainty **cert_list);

#endif //TPAEDII_CERTAINTY_H
