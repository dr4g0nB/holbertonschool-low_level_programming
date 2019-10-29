#include "sort.h"

/**
 * check - check the list
 *
 * @list: list of ints
 * @now: oral Variable
 * Return: void
 */

void check(listint_t *now, listint_t **list)
{
	while (now->prev != NULL)
	{
		if (now->n < now->prev->n)
		{
			now->prev->next = now->next;
			now->next->prev = now->prev;
			if (now->prev->prev == NULL)
			{
				*list = now;
				now->next = now->prev;
				now->prev = NULL;
			}
			else
			{
				now->prev = now->prev->prev;
				now->next = now->prev->next;
				now->prev->next = now;
			}
			now->next->prev = now;
			print_list(*list);
		}
		else
			now = now->prev;
	}
}

/**
 * insertion_sort_list - list of ints in ascending order using the Insertion
 * sort algorithm
 *
 * @list: list of ints
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now = NULL, *move = NULL, *idx = NULL;

	if (list == NULL || *list == NULL ||
		(*list)->next == NULL || (*list)->next->next == NULL)
		return;

	move = *list;
	idx = *list;
	now = *list;

	while (move != NULL)
	{
		if (move == idx)
			move = move->next;
		else if (move != NULL && move->n < move->prev->n)
		{
			now = move;
			move = move->next;
			now->prev->next = now->next;
			if (move)
				now->next->prev = now->prev;
			now->prev = now->prev->prev;
			now->next = now->prev->next;
			now->prev->next = now;
			now->next->prev = now;
			print_list(*list);
			check(now, list);
		}
		else
		{
			move = move->next;
		}
	}
}
