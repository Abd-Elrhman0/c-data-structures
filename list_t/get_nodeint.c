#include "main.h"

// search for a node in specific index in the integer linked list
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	int j;

	for (j = 0; j < index; j++)
	{
		node = node->next;
	}

	return node;
}

