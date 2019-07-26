#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positives numbers.
 * @argc: Counts.
 * @argv: Pointer.
 * Return: 1.
 */

int main(int argc, char *argv[])
{
	int r, sum, d;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}	
		
	while (argc-- && argc > 0)
	{
		for (d = 0; argv[argc][d] != '\0'; d++)
		{
			if (!(isdigit(argv[argc][d])))
			{
				printf("Error\n");
				return (1);
			}
		}
		r = atoi(argv[argc]);
		sum += r;
	}
	printf("%d\n", sum);
	return(r);
}
