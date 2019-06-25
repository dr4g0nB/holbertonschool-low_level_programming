#include "holberton.h"
/**
* _islower - check the code for Holberton School students.
* @c: lowercase c
* Return: 1 and 0
* c - the letter c
*/

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

