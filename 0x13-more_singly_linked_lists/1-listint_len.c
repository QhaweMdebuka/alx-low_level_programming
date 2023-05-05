#include "lists.h"

/**
 * listint_len- prints the elements in the linked lists
 * @h: is the pointer to listint
 *
 * Return: linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
