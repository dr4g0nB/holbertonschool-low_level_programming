#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node.
 * @head: head.
 * @n: ints.
 * Return: address of new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *babyzero = *head;

	babyzero = malloc(sizeof(listint_t));
	if (babyzero == '\0')
	{
		return ('\0');
	}

	babyzero->n = n;
	babyzero->next = *head;
	*head = babyzero;

	return (babyzero);
}
