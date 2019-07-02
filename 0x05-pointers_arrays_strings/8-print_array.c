#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array.
 * @a: pointer.
 * @n: pointer.
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c != n)
		{
			printf("%d, ", a[c]);/**posicion de int *a*/
		}
		else
		{
			printf("%d", a[c]);
		}
	}
		printf("\n");
}
