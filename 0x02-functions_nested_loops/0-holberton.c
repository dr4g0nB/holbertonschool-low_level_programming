#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long h;
	char holb[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (h = 0; h <= sizeof(holb); h++)
	{
	_putchar(holb[h]);
	}
	_putchar('\n');
	return (0);
}
