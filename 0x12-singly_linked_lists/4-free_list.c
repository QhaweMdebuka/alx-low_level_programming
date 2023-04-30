#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - wites a function that frees list_t
 *
 *
 */

void free_list(list_t *head);

int main(void)
{
	list_t *h;

	head = NULL;

	add_note_end(&head);
	print_list(head);
	free_list(head);
	head = NULL;

	return (0);
}	
