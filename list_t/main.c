#include "main.h"

int main()
{
	list_t *head;

	head = NULL;

	// insert some elements
	add_node(&head, "ahmed");
	add_node(&head, "mohamed");
	add_node(&head, "abdo");
	add_node(&head, "abdo");
	add_node(&head, "abdo");
	add_node(&head, "abdo1");
	add_node(&head, "abdo");

	// print the size
	if (list_len(head) == 0)
	{
		printf("the list is empty\n");
	}

	else
	{
		printf("size = %lu.\n", list_len(head));
	}

	// print the linked list followed by the num. of elements
	size_t n = print_list(head);
	printf("-> %lu elements.\n", n);

	// search for the node in index 5
	list_t *node = get_node_at_index(head, 5);
	printf("%s\n", node->str);

	// free the list
	free_list(head);
}
