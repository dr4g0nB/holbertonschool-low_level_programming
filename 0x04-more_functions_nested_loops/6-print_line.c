#include "holberton.h"

/**
 * print_line - prints a char or a line.
 * @n: times to be repeated.
 * Returns: Nothing.
 */

void print_line(int n)
{
	int r;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
