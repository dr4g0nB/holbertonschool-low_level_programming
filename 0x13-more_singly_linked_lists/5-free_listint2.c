#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: pointer.
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *len;

	/** Check if something its begin send */
	if (head == NULL || *head == NULL)
	{
		return;
	}

	len = *head;

	/** Process to free the linked list */
	while (head != NULL && len != NULL)
	{
		tmp = len;
		len = len->next;
		free(tmp);
	}
	*head = NULL;
}
