#include "main.h"

// search for a node in specific index in the string linked list
list_t *get_node_at_index(list_t *head, unsigned int index)
{
        list_t *node = head;
        int j;

        for (j = 0; j < index; j++)
        {
                node = node->next;
        }

        return node;
}

