#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line.
 * @n: number of times of char.
 * Returns: nothing.
 */

void print_diagonal(int n)
{
	int fi;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= n; col++)
		{
			for (fi = 1; fi <= col; fi++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
