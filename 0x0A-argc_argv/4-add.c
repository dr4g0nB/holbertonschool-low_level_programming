#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positives numbers.
 * @argc: Counts.
 * @argv: Pointer.
 * Return: 1.
 */

int main(int argc, char *argv[])
{
	int r, sum;
	/**int d;*/

	/**d = '97';*/
	r = 0;
	sum = 0;

	if (argc > 1)
	{
		for (sum = 0; sum < argc; sum++)
		{
		r = r + atoi(argv[sum]);
		}
		printf("%d\n", r);
	}
	else
	{
		printf("0\n");
	}
	/**
	* if (d >= '97' && d <= '122')
	* {
	*	printf("Error\n");
	* }
	*/
	return (1);
}
