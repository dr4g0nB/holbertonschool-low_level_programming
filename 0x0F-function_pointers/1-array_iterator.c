#include <stddef.h>

/**
 * array_iterator - Executes a function as a parameter
 * @array: Point to the array.
 * @size: Size of array
 * @action: Function pointer.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t len;/**len of array*/

	void (*receive)(int); /**declaring the function that would receive function*/

	receive = action;/**Initializing the function*/
	if (array == NULL || action == NULL)/**Checking if it's empty*/
	{
		return;/**Return nothing*/
	}
	for (len = 0; len < size; len++)/**Compare if len is < size*/
	{
		receive(array[len]);/**len at array position*/
	}
}
