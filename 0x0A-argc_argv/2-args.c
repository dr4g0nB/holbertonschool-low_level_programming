#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: .
 * @argv: .
 * Return: .
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	for (i = 0; i < argc; i++)
	{
		if (*argv == 0)
		{
			printf("%d\n", argc);
		}
		else
		{
			printf("%s\n", argv[i]);
		}
	/**printf("%d\n", argc);*/
	}
	return (0);
}
