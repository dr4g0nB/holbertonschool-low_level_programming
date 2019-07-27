#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints a string.
 * @separator: String to be printed between the strings.
 * @n: number of strings passed.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *r;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		r = va_arg(str, char *);
		if (r == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", r);
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(str);
	printf("\n");
}
