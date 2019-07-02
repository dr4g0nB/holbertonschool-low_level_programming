#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array.
 * @a: pointer.
 * @n: pointer.
 */

void print_array(int *a, int n)
{
	int c;/**contador*/

	for (c = 0; c < n; c++)
	{
		if (c != n - 1) /** n - 1 para decirle que es el final*/
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
