#include "holberton.h"

/**
 * _puts_recursion - Print a string followed by new line.
 * @s: Pointer.
 * Retun: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')/**pointer is different than null do this*/
	{
		_putchar(*s);
		s++;/**Increment*/
		_puts_recursion(s);
		/**calls itself so it can take a new value after incrementing*/
	}
	else/**if s is equal to null*/
	{
		_putchar('\n');/**print a new line*/
	}
}
