#include "holberton.h"

/**
 * strspn - length of a prefix substring.
 * @s:string.
 * @accept: pointer.
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int rec;/**recorre a s*/
	int len; /**recorre a accept*/
	int aux;

	for (rec = 0; s[rec] != '\0'; rec++)
	{
	/**primer contador para s*/
		aux = 0;
		for (len = 0; accept[len] != '\0'; len++)
		{
		/**contador para accept*/
			if (accept[len] == s[rec])/**compare both*/
			{/**si accept tiene algo, siga recorriendo*/
				aux = 1;
			}
		}
		if (aux == 0)
		{/**si no tiene nada termine, salga y retorne*/
			break;
		}
	}
	return (rec);
}
