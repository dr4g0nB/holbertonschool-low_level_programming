#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: natural number.
 * Return: Nothing.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n + '0');
                _putchar(',');
                _putchar(' ');
                _putchar('\n');
		if (n > 98)
		{		
			n--;
		}
		else
		{
			n++;
		}
	}
}
