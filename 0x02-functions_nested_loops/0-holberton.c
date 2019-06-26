#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int   h;
	char  holb[] = "Holberton";

	for (h = 0; h <= 8; h++)
	{
	_putchar(holb[h]);
	}
	_putchar('\n');
	return (0);
}
