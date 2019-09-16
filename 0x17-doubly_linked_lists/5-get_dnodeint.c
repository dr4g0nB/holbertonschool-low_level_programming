#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list.
 * @head: head.
 * @index: index node.
 * Return: nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tete;
	unsigned int i;

	tete = head;

	/** Recorrer hasta llegar a index */
	i = 0;
	while (i != index)
	{
		/** Pero si no exite el node so return null */
		if (tete->next == NULL)
		{
			return (NULL);
		}

		tete = tete->next;
		i++;
	}
	return (tete);
}
