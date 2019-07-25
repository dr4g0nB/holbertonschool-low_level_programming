#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Checks for the other codes.
 * @argv: Vector.
 * @argc: Counts the arguments.
 * Return: r.
 */

int main(int argc, char *argv[])
{
	int (*oper)(int, int);
	int v1, v3, r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	v1 = atoi(argv[1]);
	v3 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && v3 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	r = oper(v1, v3);
	printf("%d\n", r);
	return (0);
}
