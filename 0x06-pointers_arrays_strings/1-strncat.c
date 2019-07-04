#include "holberton.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: pointer.
 * @src: pointer.
 * @n: var.
 * Return: Dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len; /**dest*/
	int leng;/**src*/

	for (len = 0; dest[len] != '\0'; len++)/**Un contador para dest*/
	{}
	for (leng = 0; src[leng] != '\0' && leng < n; leng++)/**Un contador para src*/
	{
		dest[len + leng] = src[leng];
	}
	return (dest);
}
