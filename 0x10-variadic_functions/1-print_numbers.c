#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * @separator: String to be printed between numbers.
 * @n: number of int passed.
 * Return: .
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, r;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		r = va_arg(num, int);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		printf("%d", r);
	}
	printf("\n");
	va_end(num);
}
