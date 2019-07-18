#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: int.
 * Return: 98 or pointer.
 */

void *malloc_checked(unsigned int b)
{
	char *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
