#include "holberton.h"

/**
 * factorial - Returns factorial of n.
 * @n: given number.
 * Return: 3 options.
 */

int factorial(int n)
{
	if (n < 0)/**if n is less than zero*/
	{
		return (-1);/**return -1, indicates error*/
	}
	if (n == 0)/**if n equals 0*/
	{
		return (1);/**return 1 cause !0 = 1*/
	}
	/**If none of the above then return the !n*/
	return (n * factorial(n - 1));
}
