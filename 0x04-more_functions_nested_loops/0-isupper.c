#include "holberton.h"

/**
 * _isupper - prototype.
 * @c: uppercase c.
 * Return: 0 or 1.
 */

int _isupper(int c)
{

	if ((c == 65) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
