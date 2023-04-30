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

int main(void)
{
	list_t *h;
	list_t *new;
	list_t hello = {"Qhawe", 07, NULL};
	size_t n;

	head = &hello;
	new malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Mistake\n");
		return (1);
	}
	new->str = strdup("Greetings");
	new->len = 10;
	new->next = head;
	head = new;
	n = print_list(head;
			printf("->%lu elements\n", n);

			printf("\n");
			free(new->str);
			new->str = NULL;
			n = print_list(head);
			printf("-> %lu elements\n", n);

			free(new);
	return (0);
}
