#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check code
 * print_list - the purpose is to print elements of list_t
 * @h: caracter that will be used to assign and point values
 *
 * Return: number of nodes
 *
 */

size_t print_list(const list_t *h);

{
	size_t n == 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
