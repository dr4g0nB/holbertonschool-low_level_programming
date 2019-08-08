#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a nth.
 * @n: pointer.
 * @index: position.
 * Return: 1 or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux;

	/** Checks for error */
	if (index > 64)
	{
		return (-1);
	}

	/** In case of success */
	aux = 1 << index;
	*n = *n | aux;
	return (1);
}
