#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Pointer.
 * @s2: Pointer.
 * @n: Int.
 * Return: NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *empty;
	unsigned int len, uno;/** For s1 */
	unsigned int leng, dos;/** For s2*/
	char *s3;

	empty = "";

	if (s1 == NULL)/** Adds empty string to s1*/
	{
		s1 = empty;
	}
	for (len = 0; s1[len] != '\0'; len++)
	;/** Length of s1*/

	if (s2 == NULL)/** and s2*/
	{
		s2 = empty;
	}
	for (leng = 0; s2[leng] != '\0'; leng++)
	;/** and s2*/

	s3 = malloc((len + (n * sizeof(*s2) + 1)) * sizeof(*s3));
	/** Reserve bytes for what's coming*/
	if (s3 == NULL)
	{
		return (NULL);
	}
	/** In case malloc doesn't work*/
	for (uno = 0; uno < len; uno++)
	{
	/**Concatenates s1*/
		s3[uno] = s1[uno];
	}
	for (dos = 0; dos < n && s2[dos] != '\0'; dos++, uno++)
	{
	/** Concatenates s2 with a condition*/
		s3[uno] = s2[dos];
	}
	s3[uno] = '\0';
	return (s3);
}
