#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: int.
 * @max: int.
 * Return: NULL.
 */

int *array_range(int min, int max)
{
	int *arrin;
	int full;

	if (min > max)
	{
		return (NULL);
	}

	arrin = malloc(sizeof(int) * (max - min + 1));
	if (arrin == NULL)
	{
		return (NULL);
	}
	for (full = 0;  min <= max; full++)
	{
		arrin[full] = min;
		min++;
	}
	return (arrin);
}
