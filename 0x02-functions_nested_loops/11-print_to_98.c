#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: natural number.
 * Return: Nothing.
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	while (n != 98)
	{

		if (n < 98)
		{
			n++;
		}
		else if (n == 98)
		{
			continue;
		}
		else 
		{
			n--;
		}
		printf ("%d", n);

		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
	}
		printf("\n");
}	

