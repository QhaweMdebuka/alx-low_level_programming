#include <stdlib.h>
#include "lists.h"

/**
 * free_list - writes a function that fress a list 
 * @head: is the list that needs to be freed 
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
