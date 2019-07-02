#include "holberton.h"

/**
 * print_rev - prints a string in reverse. 
 * @s: pointer
 */

int _strlen(char *s)
{
        int len;

        for (len = 0; s[len] != '\0'; len++)
        {
        }
	return (len);
}
  
void print_rev(char *s)
{
	int i;
	int f;

	f = _strlen(s);
	for (i = f-1; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
