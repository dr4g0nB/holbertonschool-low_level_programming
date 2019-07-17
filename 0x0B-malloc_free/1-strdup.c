#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns the copy of a pointer that was passed as parameter..
 * @str: Pointer.
 * Return: '\0' && ncpy.
 */

char *_strdup(char *str)
{
	char *ncpy;
	unsigned int len, cleng;

	if (str == '\0')
	{
		return ('\0');
	}

	for (len = 0; str[len] != '\0'; len++)
	{}

	ncpy = malloc(sizeof(char) * (len + 1));
	if (ncpy == '\0')
	{
		return ('\0');
	}

	for (cleng = 0; str[cleng] != '\0'; cleng++)
	{
		ncpy[cleng] = str[cleng];
	}
	return (ncpy);
}
