#include "main.h"

// return the size
size_t list_len(const list_t *h)
{
	list_t *last;
	size_t n = 1;

	if (h == NULL)
	{
		return 1;
	}
	else
	{

		last =(list_t *) h;
		while (last->next)
		{
			n++;
			last = last->next;
		}
	}

	return n;
}
