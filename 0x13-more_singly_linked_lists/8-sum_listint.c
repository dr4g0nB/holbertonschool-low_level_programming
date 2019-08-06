#include "lists.h"

/**
 * sum_listint - Return the sum of all the data.
 * @head: poinet.
 * Return: NULL or the sum.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	tmp = head;

	/**
	* if (head == NULL)
	* {
	*	return (0);
	* }
	*/

	/**sum = 0;*/
	while (tmp != NULL)
	{
		if (head->next == NULL)
		{
			return (0);
		}

		sum += tmp->n; /** tmp->n;*/
		tmp = tmp->next;
		/**sum++;*/
	}
	return (sum);
}
