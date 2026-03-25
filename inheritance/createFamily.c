#include "main.h"

// Create a new individual with `generations`
person *create_family(int generations)
{
    person *node = (person *) malloc(sizeof(person));

    if (generations > 1)
    {
	    node->parents[0] = create_family(generations - 1);
	    node->parents[1] = create_family(generations - 1);
	    node->alleles[0] = (node->parents[0])->alleles[random() % 2];
	    node->alleles[1] = (node->parents[1])->alleles[random() % 2];
    }

    else
    {
	    node->parents[0] = NULL;
	    node->parents[1] = NULL;

	    node->alleles[0] = random_allele();
	    node->alleles[1] = random_allele();
    }
    return node;
}
