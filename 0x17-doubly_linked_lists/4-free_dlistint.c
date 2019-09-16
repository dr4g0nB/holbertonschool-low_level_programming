#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees the list.
 * @head: head of list.
 * Return - Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr_h;

	while (head != NULL)
		ptr_h = head;
		head = head->next;
		free(ptr_h);

}
