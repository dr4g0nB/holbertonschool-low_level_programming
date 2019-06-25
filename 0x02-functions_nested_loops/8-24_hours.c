#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{

	int h;
	int m;

	for (h >= 0; h <=23; h++)
	{
		for (m >= 0; h <= 60; m++)
		{
		_putchar ('0');
		_putchar (':');
		_putchar ('0');
		_putchar ('\n');
		}
	}
}
