#include "holberton.h"

/**
 * flip_bits - Flipping bits.
 * @n: n.
 * @m: m.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size, count, alma;

	size = 63;
	count = 0;
	alma = 0;

	while (size >= count)
	{
		if ((m & 1) != (n & 1))
		{
			alma++;
		}
		n >>= 1;
		m >>= 1;
		count++;
	}
	return (alma);
}
