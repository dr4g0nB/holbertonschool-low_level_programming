#include "holberton.h"

/**
 * more_numbers - wil print more numbers. 
 *
 * Return: 0.
 */

void more_numbers(void)
{
	int tentimes;
	char n;

	for (tentimes = 0; tentimes < 11; tentimes++)
	{
		for (n = 48; n <58; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}

}
