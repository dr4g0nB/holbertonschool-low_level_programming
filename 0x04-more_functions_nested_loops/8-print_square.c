#include "holberton.h"

/**
 * print_square - Prints Hashtags.
 * @size: y.
 */

void print_square(int size)
{
	int fil;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 0; col < size; col++)
		{
			for (fil = 0; fil < size; fil++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
