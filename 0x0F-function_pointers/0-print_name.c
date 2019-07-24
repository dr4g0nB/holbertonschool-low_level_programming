#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name.
 * @name: Name to be printed .
 * @f: Function pointer.
 * Return: 0.
 */

void print_name(char *name, void (*f)(char *))
{
	/**Create a function that would receive whats on function f*/
	void (*print)(char *);

	/**Check if is empty*/
	if (name == NULL || f == NULL)
	{
		return;
	}

	/**Giving the address of f to print*/
	print = f;
	/**Printing name that the function print received*/
	print(name);
}
