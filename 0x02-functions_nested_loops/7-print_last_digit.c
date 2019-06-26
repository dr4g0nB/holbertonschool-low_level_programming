#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * print_last_digit
 * @n:.
 * Return: n.
 */

int print_last_digit(int n)
{	
	int ld; 
	ld = n % 10;
	 
	if (n < 0)
	{
		ld = ld * -1;
	}

	_putchar(ld + '0');
	return (ld);
}
