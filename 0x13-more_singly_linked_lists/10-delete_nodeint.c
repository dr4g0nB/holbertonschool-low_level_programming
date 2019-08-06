#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node
 * @head: double pointer.
 * @index: unsigned int.
 * Return: -1 or 1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmpo;
	unsigned int count = 0, leng = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		leng++;
	}
	if (index > leng)
		return (-1);
	tmp = *head;
	if (index == 0 && leng != 0)
	{
		*head = tmp->next;
		free(tmp);
		return (-1);
	}
	else if (index == 0)
	{
		*head = NULL;
		free(tmp);
		return (1);
	}
		while (count != index)
		{
			if (count + 1 == index)
			{
				tmpo = tmp;
			}
			tmp = tmp->next;
			count++;
		}
	tmpo->next = tmp->next;
	free(tmp);
	return (1);
}
