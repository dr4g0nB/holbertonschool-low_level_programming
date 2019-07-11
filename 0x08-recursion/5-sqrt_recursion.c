#include "holberton.h"

/**
 * _sqrt_recursion - Natural square root of n.
 * @n: number.
 * Return: -1.
 */

int _sqrt_recursion(int n)
{
	int a = 1;
	return  main(n, a);
}

int main(int n, int a)
{
	if (a * a == n)
	{
		return a;
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return main(n, a + 1);
	}
}
