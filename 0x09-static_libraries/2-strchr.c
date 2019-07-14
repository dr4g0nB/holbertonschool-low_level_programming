#include "holberton.h"

/**
 * _strchr - Locates the char in a string.
 * @s: string.
 * @c: char.
 * Return: Two returns.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	/**Recorrera el string y evaluara */
		if (*s == c)
		{
		/**si en s hay un char*/
			return (s);
		/**si lo hay, retorne lo que hay despues del char*/
		}
		s++; /**e incremente*/
	}
	if (*s == c)
	{/**en pointer s hay un char*/
		return (s);
	/**retornelo*/
	}

	else
	{
		/**sino retorne char null*/
		return ('\0');
	}
}
