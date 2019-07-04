#include "holberton.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: pointer.
 * @src: pointer.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int leng;/**for src*/
	int len;/**for dest*/

	for (len = 0; dest[len] != '\0'; len++)
	/**Contador para dest, que cuente todo lo que contiene*/
	{
	}

	for (leng = 0; src[leng] != '\0'; leng++)
	/**Contador for src so it will add itself to dest*/
	{
		dest[len + leng] = src[leng];
		/** dest it's gonna take itself (len) plus src (leng) so it can add src */
	}

	return (dest);/**dest its the result*/
}
