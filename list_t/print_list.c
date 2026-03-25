#include "main.h"

// print the list and return the number of elements of the linked list
size_t print_list(const list_t *h)
{
	// handle the case when the linked list is empty
	if (h == NULL)
	{
		printf("list is empty.\n");
		return 1;
	}

	list_t *last;
	size_t n = 1;
	
	last = (list_t *) h;
	while (last->next)
	{
		printf("[%u] %s\n", last->len, last->str);
		n++;
		last = last->next;
	}

	printf("[%u] %s\n", last->len, last->str);

	return n;
}
