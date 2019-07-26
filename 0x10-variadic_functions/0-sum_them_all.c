#include <stdarg.h>

/**
 * sum_them_all - Sum all parameters.
 * @n: n numbers.
 * Return: 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list suma; /** Declaring va_list */

	unsigned int i, f;

	f = 0;

	va_start(suma, n);/** Initializing va_list and parameter */

	if (n == 0)/** Checking if n receives something */
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		/** Accessing to each item */
		f += va_arg(suma, int);
	}
	va_end(suma); /** Clean up memory */
	return (f);

}
