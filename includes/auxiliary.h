#ifndef TPAEDII_AUXILIARY_H
#define TPAEDII_AUXILIARY_H

#define MAX_BUFFER_SIZE 1024
#define HISTOGRAM_CLASSES 5
#define HISTOGRAM_FREQUENCY 0.2
#define HISTOGRAM_FREQ_MAX 1
#define HISTOGRAM_FREQ_MIN 0

#include "certainty.h"
#include "line.h"

int *newHistogram(struct Line **line_list, struct Certainty **list);

#endif
