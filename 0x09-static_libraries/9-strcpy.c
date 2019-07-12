#include "holberton.h"

/**
 * _strcpy - copies the string pointed to another.
 * @dest: Pointer.
 * @src: Pointer.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int tmp;

	for (tmp = 0; src[tmp] != '\0'; tmp++)
	{
		dest[tmp] = src[tmp];
		*(dest + 1) = *(src + 1);
	}
	dest[tmp] = '\0';
	return (dest);
}
