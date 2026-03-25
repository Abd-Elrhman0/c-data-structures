#include "main.h"

// add a node at the beginning
list_t *add_node(list_t **head, const char *str1)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));
	new->str = strdup(str1);
	new->len = strlen(str1);

	// handle the case when the linked list is empty
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}

	else
	{
		new->next = *head;
		*head = new;
	}
}
