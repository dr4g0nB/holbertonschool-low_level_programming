#include "holberton.h"
#include <stdio.h>
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
	unsigned int rein;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	alloc = malloc((nmemb) * size);
	if (alloc == NULL)
	{
		return (NULL);
	}

	for (rein = 0; rein < (size * nmemb); rein++)
	{
		alloc[rein] = 0;
	}
	return (alloc);
}
