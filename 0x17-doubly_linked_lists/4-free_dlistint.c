#include "lists.h"

/**
 * free_dlistint - Frees the list.
 * @head: head of list.
 * Return - Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	if (head == NULL)
		return;

	free_list = head;
	while (head != NULL)
		free_list = head;
		head = head->next;
		free(free_list);

}
