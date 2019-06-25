#include "holberton.h"
/**
*_islower - shows a lowercase char
*
*
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

