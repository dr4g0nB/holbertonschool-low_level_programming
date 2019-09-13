#include"lists.h"
#include "stdio.h"

/**
 * dlistint_len - Returns the number of elements.
 * @h: List.
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
