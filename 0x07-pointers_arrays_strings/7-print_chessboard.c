#include "holberton.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Multidimensional array.
 * Return: Nothing.
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
			if (col == 7)
				_putchar('\n');
		}
	}
}
