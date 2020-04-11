#include <stdio.h>
#include <string.h>

#include "../includes/line.h"

struct Line *splitBuffer(char buffer[MAX_BUFFER_SIZE])
{
    char *p;
    char column_one[MAX_BUFFER_SIZE];
    char column_two[MAX_BUFFER_SIZE];
    char column_three[MAX_BUFFER_SIZE];
    char column_four[MAX_BUFFER_SIZE];

    p = strtok(buffer, " ");
    if(p)
        strcpy(column_one, p);

    p = strtok(NULL, " ");
    if(p)
        strcpy(column_two, p);

    p = strtok(NULL, " ");
    if(p)
        strcpy(column_three, p);

    p = strtok(NULL, " ");
    if(p)
        strcpy(column_four, p);

    struct Line *new_line=NULL;
    new_line =newLine(column_one, column_two, column_three, column_four);

    return new_line;
}

void parseFile(struct Line **list, char * filename)
{
    FILE* file;
    char buffer[MAX_BUFFER_SIZE];

    file = fopen(filename, "r");

    while(fgets(buffer, MAX_BUFFER_SIZE, file))
    {

        int valid = ((buffer[0] >= 'a' && buffer[0] <= 'z') || (buffer[0] >= 'A' && buffer[0] <= 'Z')) ? 1 : 0;

        if(valid == 1)
        {
            struct Line *new_line = splitBuffer(buffer);
            appendToLinesList(list, new_line);
        }

        memset(buffer, 0, sizeof(buffer)); // Clean buffer
    }

    fclose(file);
}
