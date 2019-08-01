#include "lists.h"

/**
 * list_len - Returns the number of elements in list_t.
 * @h: header.
 * Return: Number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t len;/**Para que no se desborde*/

	len = 0;/**A loop for recorrer*/
	while (h != NULL)/**goes til null*/
	{
		h = h->next;/**h is gonna go to the next node*/
		len++;
	}
	return (len);/**Returns the number of nodes*/
}
