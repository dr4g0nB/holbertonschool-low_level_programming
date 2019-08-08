#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an ui.
 * @b: String of chars. Pointer.
 * Return: 0 or alma.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int alma = 0; /**almacena*/
	int count = 0; /** contador */
	int pow; /** potencia */

	if (b == NULL)
	{
		return (0);
	}

	/** Va hasta lo ultimo del string  */
	while (b[count + 1] != '\0')
	{
		count++;
	}

	pow = 1; /** Potencia iniciadda en 1 */

	while (count >= 0)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}

		alma += (b[count] - '0') * pow;/** '0' Convierta el numero */
		pow *= 2; /** Lo pase a unsigned int */
		count--;
	}
	return (alma);
}
