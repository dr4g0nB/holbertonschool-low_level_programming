#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: number of things.
 * @argv: array.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	if(argc < *argv[i]){
	for (i = 0; i < argc; i++)
	{
	printf("%d\n", i);
	}}
	return(0);
}
