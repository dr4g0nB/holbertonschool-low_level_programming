#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a nth position
 * @n: Pointer.
 * @index: index.
 * Return: -1 or 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux;

	/** If it fails */
	if (index > 64)
	{
		return (-1);
	}

	/** If it success */
	aux = 1 << index;
	*n = *n & ~aux;
	return (1);
}
