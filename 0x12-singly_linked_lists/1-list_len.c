#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

/**
 *list_len - returns  number of elements
 *@h: will be used to connect nodes
 *Return: elements in *h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
