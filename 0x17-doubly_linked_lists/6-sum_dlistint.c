#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data.
 * @head: poinet.
 * Return: NULL or the addition.
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		add += head->n; /** tmp->n;*/
		head = head->next;
	}
	return (add);
}
