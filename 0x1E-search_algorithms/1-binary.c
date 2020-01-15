#include "search_algos.h"

/**
 * print_array - Prints array.
 * @array: Pointer to the first element of the array to search in.
 * @low_side: Left side of half array.
 * @high_side: Right side of half array.
 * @size: Number of elements in array.
 */

void print_array(int *array, int low_side, int high_side)
{
	int len = 0;

	printf("Searching in array: ");

	for (len = low_side; len <= high_side; len++)
	{
		printf("%d", array[len]);

		if (len != high_side)
			printf(", ");
	}

	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of ints.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: If value is not present in array or if array is NULL -1 or index.
 */

int binary_search(int *array, size_t size, int value)
{
	int low_side = 0;
	int high_side = size - 1;
	int half_array;

	if (array == NULL)
		return (-1);

	while (low_side <= high_side)
	{
		half_array = (low_side + high_side) / 2;

		print_array(array, low_side, high_side);
		if (array[half_array] < value)
		{
			/** Left side */
			low_side = half_array + 1;
		}
		else if (array[half_array] > value)
		{
			/** Right side */
			high_side = half_array - 1;
		}
		else
		{
			return (half_array);
		}
	}
	return (-1);
}
