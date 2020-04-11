#include <stdio.h>

#include "../includes/auxiliary.h"

int *newHistogram(struct Line **line_list, struct Certainty **list) {
	static int histogram[HISTOGRAM_CLASSES] = {0, 0, 0, 0, 0};

	if(*line_list == NULL)
		return histogram;

	printf("Calculating classes values.\n");
	makeCertaintyList(line_list, list);

	struct Certainty *current = *list;

	while(current != NULL)
	{
		if(current->value < 0.2)
			histogram[0]++;
		if(current->value > 0.2 && current->value < 0.4)
			histogram[1]++;
		if(current->value > 0.4 && current->value < 0.6)
			histogram[2]++;
		if(current->value > 0.6 && current->value < 0.8)
			histogram[3]++;
		if(current->value > 0.8)
			histogram[4]++;

		current = current->next;
	}

	return histogram;
}
