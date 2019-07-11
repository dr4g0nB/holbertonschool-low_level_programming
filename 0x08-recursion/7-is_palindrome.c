#include "holberton.h"

/**
 * len - function that gets the length.
 * @s: string.
 * Return: 2 option.
 */

int len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + len(s));
}

/**
 * compare - Function that compares le len && s
 * @s: string.
 * @len: length.
 * Return: 3 options.
*/

int compare(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	else if (*s == *(s + len - 1))
	{
		return (compare(s + 1, len - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Function.
 * @s: string.
 * Return: 2 options.
 */

int is_palindrome(char *s)
{
	int f;

	f = len(s);

	if (f <= 1)
	{
		return (1);
	}
	return (compare(s, f));
}
