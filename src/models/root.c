#include <stdlib.h>
#include <string.h>

#include "../../includes/root.h"

struct Root *newRoot(char origin[MAX_BUFFER_SIZE])
{
    struct Root *new_root;
    new_root = (struct Root *) malloc(sizeof(struct Root));

    memcpy(new_root, origin, strlen(origin));
    new_root->freq_relative=0;
    new_root->freq_absolute=0;
    new_root->freq_acumulated=0;

    return new_root;
}
