#include "holberton.h"

/**
 * _memset - Fills memory with constant byte.
 * @n: fills the first n bytes.
 * @s: ponited to by s.
 * @b: with the constant b.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int rec;

	for (rec = 0; rec < n; rec++)
	{
		s[rec] = b;
	}
	return (s);
}
