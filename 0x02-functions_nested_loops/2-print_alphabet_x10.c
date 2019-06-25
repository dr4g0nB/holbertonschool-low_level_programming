#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char alpha = 97;
	int sn = 1;

	for (sn = 1; sn <= 10; sn++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
