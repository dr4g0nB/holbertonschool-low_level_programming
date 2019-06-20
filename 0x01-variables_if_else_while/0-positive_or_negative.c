#include <stdlib.h>

#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;/*ramdom number*/
	/* your code goes there */
	if (n > 0\n)
	{
	prift("is positive");
	}
	else
	(n = 0\n)
	{
	prift("is zero");
	}
	else
	(n < 0\n)
	{
	prift("is negative");
	}
	return (0);
}
