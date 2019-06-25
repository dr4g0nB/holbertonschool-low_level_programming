#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int bets;

	for (bets = 97; bets <= 122; bets++)
		_putchar(bets);
		_putchar('\n');
}
