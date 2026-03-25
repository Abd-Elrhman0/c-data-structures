#include "main.h"

// Free `p` and  all ancestors of `p`.
void free_family(person *p)
{
    // Handle base case
    if (p == NULL)
    {   
	    printf("there is no family to free");
            return;
    }
    else
    {
	    // Free parents recursively
            if (p->parents[0] != NULL)
		    free_family(p->parents[0]);
            if (p->parents[1] != NULL)
	            free_family(p->parents[1]);
            // Free child
            free(p);
    }
}