#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list.
 * @h: pointer.
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t len;
	len = 0;

	while (h !=  '\0')
	{
		h = h->next;
		len++;
	}
	return (len);
}
