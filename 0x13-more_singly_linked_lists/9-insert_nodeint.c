#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a node at a given position.
 * @head: double pointer.
 * @idx: ui.
 * @n: i.
 * Return: Address of new node or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *innode;
	listint_t *tmp;
	unsigned int len = 0;

	if (head == NULL && idx != 0)
	{
		return (NULL);
	}
	tmp = *head;
	innode = malloc(sizeof(listint_t));
	if (innode == NULL)
	{
		return (NULL);
	}
	innode->n = n;
	if (idx == 0)/** In case what is being sent is nth */
	{
		innode->next = *head;
		*head = innode;
		return (innode);
	}
	tmp = *head;
	while (len < idx - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(innode);
			return (NULL);
		}
	len++;
	}
	innode->next = tmp->next;
	tmp->next = innode;
	return (innode);
}
