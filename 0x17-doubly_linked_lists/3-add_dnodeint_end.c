#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a node at the end.
 * @head: Head.
 * @n: Content of node.
 * Return: Address of new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr_h = *head;
	dlistint_t *new_n;

	if (head == NULL)
	{
		return (NULL);
	}

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}

	/** Assignation of data */
/**	new_n->n = n;*/
	new_n->next = NULL;
	new_n->n = n;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}

	while (ptr_h->next != NULL)
	{
		ptr_h = ptr_h->next;
	}

	ptr_h->next = new_n;
	new_n->prev = ptr_h;

	return (new_n);
}
