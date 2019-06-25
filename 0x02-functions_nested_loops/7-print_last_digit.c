#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * print_last_digit
 * @n:.
 * Return: n.
 */

int print_last_digit(int n)
{	
	int abs = int n;

	n = abs(n % 10)
	_putchar (n);
	return (n);
}
