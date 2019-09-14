#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints the elements of linked list.
 * @h: linked list.
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	/* Traverse the list til NULL*/
	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		/* Keep moving to the next one */
		h = h->next;

		len++;
	}
	return (len);
}
