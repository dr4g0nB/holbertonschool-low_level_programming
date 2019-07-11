#include "holberton.h"

int process(int n, int a);
/**
 * _sqrt_recursion - Natural square root of n.
 * @n: number.
 * Return: -1.
 */

int _sqrt_recursion(int n)
{
	int a = 1;

	return (process(n, a));
}

/**
 * process - Aux function.
 * @n: number.
 * @a: number.
 * Return: 3 options.
 */

int process(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (process(n, a + 1));
	}
}
