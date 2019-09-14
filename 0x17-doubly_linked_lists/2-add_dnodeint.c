#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Add a node at the beggining.
 * @head: head of list.
 * @n: n.
 * Return: address of new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	/** Checks if the head is NULL */
	if (*head == NULL)
	{	
		return (NULL);
	}

	/** Allocate memory for the new node */
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}

	/** Data for new node*/
	new_n->n = n; 
	/** Next is head and previous is NULL */
	new_n->prev = NULL;
	new_n->next = *head;
	if (head != NULL)
	{
		(*head)->prev = new_n;
	}
	*head = new_n;
	
	/** Returns address of the new node */
	return (new_n);
}
