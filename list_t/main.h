#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * struct listint_s - singly linked list
 * @num: number
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int num;
    struct listint_s *next;
} listint_t;

list_t *add_node(list_t **head, const char *str1);
list_t *add_node_end(list_t **head, const char *str1);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
list_t *get_node_at_index(list_t *head, unsigned int index);
void free_list(list_t *head);
#endif // !ΜΑΙΝ Η
