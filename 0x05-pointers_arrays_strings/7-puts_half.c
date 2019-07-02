#include "holberton.h"

/**
 *
 *
 */

void puts_half(char *str)
{
	int aux; /**guarda el cont*/
	int i, c;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	aux = i;
	i = i / 2;
	if (aux % 2 != 0)
	{
		i++;
	}
	
	for (c = 0; c < aux; c++)
	{
		if (c >= i)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
