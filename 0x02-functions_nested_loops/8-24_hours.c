#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 23; d1++)
	{
		for (d2 = 0; d2 <= 59; d2++)
		{
			_putchar (d1 / 10 + '0');
			_putchar (d1 % 10 + '0');
			_putchar (':');
			_putchar (d2 / 10 + '0');
			_putchar (d2 % 10 + '0');
			_putchar ('\n');
		}
	}
}
