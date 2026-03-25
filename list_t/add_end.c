#include "main.h"

// add a node at the end
list_t *add_node_end(list_t **head, const char *str1)
{
	list_t *new, *last;

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
                last = *head;
                // going to the end of the linked list
                while (last->next != NULL)
                        last = last->next;

                last->next = new;
                new->next = NULL;
        }
}
