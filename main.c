#include <stdio.h>
#include <string.h>

#include "./includes/parser.h"

int main()
{
	int i = 0;
	int *histogram;

    struct Line *list = NULL;
    struct Morpho *morf_list = NULL;
    struct Size *size_list = NULL;
    struct Word *word_list = NULL;
	struct Certainty *cert_list = NULL;

    printf("Parsing file.\n\n");
    parseFile(&list, "./../input.txt");

    printf("Morphosyntatic analisys.\n\n");
    calcMorphoFrequencies(&list, &morf_list);

    printf("\nWord Size analisys.\n\n");
   	calcSizeFrequencies(&list, &size_list);

   	printf("\nCalculating words quarties.\n\n");
   	calcWordQuartil(&list, &word_list, "Revenge");

   	printf("\nGenerating histogram info.\n");
   	histogram = newHistogram(&list, &cert_list);

	for(;i<HISTOGRAM_CLASSES;i++)
		printf( "Classe %d : %d\n", i, *(histogram + i));
}
