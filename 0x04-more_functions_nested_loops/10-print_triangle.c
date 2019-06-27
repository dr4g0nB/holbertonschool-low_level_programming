#include "holberton.h"

/**
 * print_triangle: Prints a triangle
 * @size: size of triangle.
 **/

void print_triangle(int size)
{
	int col;
	int fil;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 0; col < size; col++)
		{
			for (fil = 0; fil < col; fil++)
			{
				_putchar(' ');
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
