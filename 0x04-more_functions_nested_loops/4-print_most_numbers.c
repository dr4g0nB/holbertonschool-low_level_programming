#include "holberton.h"

/**
* print_most_numbers - Prints numbers except 2 && 4.
*
* Return: 0.
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n != 50) && (n != 52))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
