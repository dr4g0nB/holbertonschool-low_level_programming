#include "holberton.h"

/**
 * get_bit - Returns the value of a bit in a given index.
 * @n: uli.
 * @index: ui.
 * Return: -1 or 0 or 1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	n >>= index;
	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
