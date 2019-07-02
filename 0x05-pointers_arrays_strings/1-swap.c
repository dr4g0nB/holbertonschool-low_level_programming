#include "holberton.h"

/**
 * swap_int - Swaps value of two integers.
 * @a: First integer.
 * @b:Second integer.
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
