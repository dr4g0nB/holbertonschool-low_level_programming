#include "holberton.h"

/**
 * _strlen_recursion - Length of a string.
 * @s: Poniter that points to the string.
 * Return: Two options.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
return (0);
}
