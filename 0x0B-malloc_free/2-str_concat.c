#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First pointer.
 * @s2: Second Pointer.
 * Return: Null or s3.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	char *empty;
	int len, leng;

	empty = "";

	if (s1 == NULL)
	{
		s1 = empty;
	}
	for (len = 0; s1[len] != '\0'; len++)
	{}

	if (s2 == NULL)
	{
		s2 = empty;
	}
	for (leng = 0; s2[leng] != '\0'; leng++)
	{}

	s3 = malloc(sizeof(char) * sizeof(s1[len] + s2[leng] + 1));
	for (s3 = 0; s3 != '\0'; s3++)
	{
		*s3 = s1[len] + s2[leng];
	}
	return (s3);
}
