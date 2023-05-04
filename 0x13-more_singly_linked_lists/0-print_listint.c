#include <stdio.h>
#include <stdlib.h>

/**
 * size_t - prints the singly list
 * @print_listint nest the functions for listint_t
 * @h: is the pointer that will be used to point the listint
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", *h.n);
		num++;
		h = h->next;
	}

	return (num);
}
