#include "holberton.h"

/**
 * print_binary - Binary representation of a number
 * @n: numbers.
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int len, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	len = 2;
	while (len <= n && count < 62)
	{
		len <<= 1;
		count++;
	}
	if (count != 62)
	{
		len >>= 1;
	}
	while (len != 0)
	{
		if ((len & n) != 0)
		{
			_putchar('1');
			count++;
		}
		else
		{
			_putchar('0');
			count++;
		}
		len >>= 1;
	}
}
