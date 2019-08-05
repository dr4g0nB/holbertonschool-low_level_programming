#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a node at the end.
 * @head: double pointer.
 * @n: Contains the info.
 * Return: Address of new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	/** Primero lo creo */
	listint_t *lasti = malloc(sizeof(listint_t));

	if (lasti == NULL)
	{
		return (NULL);
	}

	lasti->n = n;
	lasti->next = NULL;
	/** Then its place is assigned */
	if (*head == NULL)
	{
		*head = lasti;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = lasti;
	}
	return (lasti);
}
