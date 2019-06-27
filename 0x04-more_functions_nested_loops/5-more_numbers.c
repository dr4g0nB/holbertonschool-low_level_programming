#include "holberton.h"

/**
 * more_numbers - wil print more numbers. 
 *
 * Return: 0.
 */

void more_numbers(void)
{
	int n;
	int time;

	for (time = 0; time < 11; time++)		
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
