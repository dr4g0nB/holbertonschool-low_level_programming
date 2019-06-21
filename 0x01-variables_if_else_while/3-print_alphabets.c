#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int bets;
	int alpha;

	for (bets = 'a'; bets <= 'z'; bets++)
	{
	putchar(bets);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
return (0);
}
