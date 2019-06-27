#include "holberton.h"

/**
* print_numbers - Numbers from 0 until 9
*
* Return:  0.
*/

void print_numbers(void)
{
	char n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
