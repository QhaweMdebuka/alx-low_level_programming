#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - struct is being initialized to list_s
 * @str: prints the string as well as strdup dupicates a string
 * @len: is the length of the string in linked  list format
 * @next: used to specify the next node
 * Description: singly linked list node structure
 * the ifndef protects from double inclusion
 * the last code is used to represent prototypes for each task
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
