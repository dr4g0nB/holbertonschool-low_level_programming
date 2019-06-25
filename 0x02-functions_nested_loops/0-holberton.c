#include "holberton.h"

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int h;

	char holb[ 9 ] = {'H','o','l','b','e','r','t','o','n'};

	for (h = 0; h <= 9; h++)
	{
	 _putchar(holb [h]);
	}
	_putchar('\n');
	return (0);
}
