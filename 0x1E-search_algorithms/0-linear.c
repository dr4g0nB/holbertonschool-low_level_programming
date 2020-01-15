#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: The value to search for.
 * Return: -1 if array is NULL or first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	int len;
	int size_butnotsize = size;

	if (array == NULL)
	{
		return (-1);
	}
	for (len = 0; len < size_butnotsize; len++)
	{
		if (value == array[len])
		{
			printf("Value checked array[%d] = [%d]\n", len, array[len]);
			return (len);
		}
		printf("Value checked array[%d] = [%d]\n", len, array[len]);
	}

	return (-1);
}
