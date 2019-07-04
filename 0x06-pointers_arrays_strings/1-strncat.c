#include "holberton.h"

/**
 *_strcat - Concatenates two strings.
 * @dest: pointer
 * @src: pointer.
 * @@n: var.
 * Return - dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int leng;

	for (len = 0; dest [len] != '\0'; len++)
	{}
	for (leng = 0; src[leng] != '\0'; leng++)
	{
		if (n == '\0')
		{
			break;
		}
		else
		{
			dest[len + leng] = src[len];
		}
	}
	return (dest);
}
