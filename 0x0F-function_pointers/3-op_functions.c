#include "3-calc.h"

/**
 * op_add - Function that will add two int
 * @a: argv[1].
 * @b: argv[3].
 # Return: a + b.
 */

int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - Function that will sub two int
 * @a: argv[1].
 * @b: argv[3].
 # Return: a - b.
 */

int op_sub(int a, int b)
{
	return(a-b);
}

/**
 * op_mul - Function that will multiply two int
 * @a: argv[1].
 * @b: argv[3].
 # Return: a * b.
 */

int op_mul(int a, int b)
{
	return(a * b);
}

/**
 * op_div - Function that will divided two int
 * @a: argv[1].
 * @b: argv[3].
 # Return: a / b.
 */

int op_div(int a, int b)
{
	return(a / b);
}

/**
 * op_mod - Function that give mod of two int
 * @a: argv[1].
 * @b: argv[3].
 # Return: a % b.
 */

int op_mod(int a, int b)
{
	return(a % b);
}
