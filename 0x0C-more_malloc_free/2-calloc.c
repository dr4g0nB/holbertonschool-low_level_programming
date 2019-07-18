#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: int.
 * @size: int.
 * Return: NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;

	if (nmemb == '\0' || size == '\0')
	{
		return (NULL);
	}

	alloc = malloc(sizeof(alloc) * nmemb);
	if (alloc == '\0')
	{
		return (NULL);
	}
	return (alloc);
}
