#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argv: argc.
 * @argc: Pointer.
 * Return: 0.
 */

int main(int argc, char **argv[])
{
	int a, b, r;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		r = a * b;
		printf("%d\n", r);
	}
	return (0);
}
