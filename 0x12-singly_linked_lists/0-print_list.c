#include "lists.h"
#include <stdio.h>

/**
 * print_list - Display all nodes from list.
 * @h: header.
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		len++;
	}
	return (len);
}
