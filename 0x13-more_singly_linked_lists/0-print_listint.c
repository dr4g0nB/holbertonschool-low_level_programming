#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Display the nodes.
 * @h: listint.
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t len;
	/**int num;*/

	len = 0;
	while (h != NULL)
	{
		if (h->n == '\0')
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		len++;
	}
	return (len);
}
