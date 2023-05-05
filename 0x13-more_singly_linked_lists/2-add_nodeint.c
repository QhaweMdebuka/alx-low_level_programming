#include "lists.h"

/**
 * add_nodeint -adds a node to the begining of listint_t
 * @head: points to the node that will be first on the list
 * @n: interger data goes into this
 * Return: NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == 0)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
