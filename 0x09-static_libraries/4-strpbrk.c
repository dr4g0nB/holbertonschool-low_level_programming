#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be scanned.
 * @accept: string bytes to match.
 * Return: s + len or '\0'.
 */

char *_strpbrk(char *s, char *accept)
{
	int len;/**for s*/
	int leng;/**for accept*/
	int aux;

	for (len = 0; s[len] != '\0'; len++)
	{/**Recorre a s*/
		aux = 0;
		for (leng = 0; accept[leng] != '\0'; leng++)
		{/**Recorre a accept*/
			if (s[len] == accept[leng])
			{
				aux = 1;
			}
		}
			if (aux == 1)
			{/**Si tiene algun byte returnelo*/
				return (s + len);
			}
	}
	/**si no retorneme null*/
	return ('\0');
}
