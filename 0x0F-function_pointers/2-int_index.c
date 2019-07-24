#include <stdlib.h>

/**
 * int_index - Searches for an integer.
 * @array: pointer to array.
 * @size: array's size.
 * @cmp: Function pointer.
 * Return: -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int (*index)(int); /**Declare function*/

	int len, a;

	/**Checking if it's empty*/
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	index = cmp;    /**Initialized*/
	/**Array's length*/
	for (len = 0; len < size; len++)
	{
		/**a will receive what len's is recorriendo*/
		a = index(array[len]);
		/**If a is different than 0*/
		if (a != 0)
		{
			return (len);
		}
	}
	return (-1);
}
