#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: pointer.
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
