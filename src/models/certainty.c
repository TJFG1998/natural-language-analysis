#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../../includes/certainty.h"

struct  Certainty *newCert(char value[MAX_BUFFER_SIZE])
{
    struct Certainty *new_cert;
    new_cert = (struct Certainty *) malloc(sizeof(struct Certainty));

    char *err;
    float float_value = strtod(value, &err);

    if(strlen(err) > 1)
    {
        printf("ERROR: %s\n", err);
        return NULL;
    }

    new_cert->value=float_value;
	new_cert->next = NULL;

    return new_cert;
}

void appendToCertaintyList(struct Certainty **list, struct Certainty *new_cert)
{
	struct Certainty *current = *list;

	if(*list == NULL)
	{
		*list = new_cert;
		return;
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_cert;
}

void makeCertaintyList(struct Line **list, struct Certainty **cert_list)
{
	struct Line *current = *list;

	if(*list == NULL)
		return;

	while (current != NULL)
	{
		appendToCertaintyList(cert_list, current->assert);
		current = current->next;
	}
}
