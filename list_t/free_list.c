#include "main.h"

// free the linked list
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		// free the string
		free(head->str);
		// free the node
		free(head);
		head = temp;
	}
}
