#include "lists.h"

/**
 * sum_listint - Return the sum of all the data.
 * @head: poinet.
 * Return: NULL or the sum.
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	/**sum = 0;*/
	while (head != NULL)
	{
		/**
		* if (head->next == NULL)
		* {
		*	return (0);
		* }
		*/

		sum += head->n; /** tmp->n;*/
		head = head->next;
		/**sum++;*/
	}
	return (sum);
}
