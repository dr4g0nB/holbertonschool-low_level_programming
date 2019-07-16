#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of strings.
 * @size: size of chars.
 * @c: Chars.
 * Return: NULL or a pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int cr; /***/
	char *p; /***/

	p = malloc(size * sizeof(char));
	if (size == 0)
	{
		return ('\0');
	}
	else
	{
			for (cr = 0; cr < size; cr++)
			{
				p[cr] = c;
			}
		p[cr] = '\0';
		return (p);
		free(p);
	}
}
