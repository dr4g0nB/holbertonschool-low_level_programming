#include "holberton.h"
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * print_last_digit
 * @n:.
 * Return: n.
 */

int print_last_digit(int n)
{	

	n = abs(n % 10);
	_putchar(n + '0');
	return (n);
}
