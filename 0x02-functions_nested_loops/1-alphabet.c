#include "holberton.h"

/**
 *print_alphabet - Entry point
 *return - nothing
 */

void print_alphabet(void)
{
	int bets;

	for (bets = 97; bets <= 122; bets++)
		_putchar(bets);
		_putchar('\n');
}
