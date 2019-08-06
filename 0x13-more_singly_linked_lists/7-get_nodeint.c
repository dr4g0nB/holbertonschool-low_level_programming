#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nht node.
 * @head: pointer.
 * @index: index of the node.
 * Return: nth node or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i;

	h = head;

	/** Recorrer hasta llegar a index */
	i = 0;
	while (i != index)
	{
		/** Pero si no exite el node so return null */
		if (h->next == NULL)
		{
			return (NULL);
		}

		h = h->next;
		i++;
	}
	return (h);
}
