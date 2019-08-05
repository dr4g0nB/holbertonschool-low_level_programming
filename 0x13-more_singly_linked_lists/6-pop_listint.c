#include "lists.h"

/**
 * pop_listint - Deletes the head of a linked list.
 * @head: double pointer.
 * Return: Head node's data(n).
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t tmp;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
