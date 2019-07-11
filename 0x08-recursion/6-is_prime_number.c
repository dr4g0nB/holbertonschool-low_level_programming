#include "holberton.h"

/**
 * evaluate - Auxiliar function.
 * @n: number.
 * @num: aux var.
 * Return: 3 options.
*/

int evaluate(int n, int num)
{
	if (n == num)
	{
		return (1);
	}
	if (n % num == 0 || n <= 1)
	{
		return (0);
	}
	return (evaluate(n, num + 1));
}

/**
 * is_prime_number - Prints prime number.
 * @n: Number.
 * Return: Prime number.
 */

int is_prime_number(int n)
{
	int prime;

	prime = 2;

	if (n == 1)
	{
		return (0);
	}
	return (evaluate(n, prime));
}
