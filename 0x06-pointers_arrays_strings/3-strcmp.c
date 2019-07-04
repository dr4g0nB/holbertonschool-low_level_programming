#include "holberton.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer.
 * @s2: Pointer
 * Return: Nothing.
 */

int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] != '\0'; len++)/**Recorre el s1*/
	{
		if (s1[len] < s2[len])/**Si s1 es menor a s2 so*/
		{
			return (s1[len] - s2[len]); /**retorneme la diferencia de ambos*/
		}
		if (s1[len] > s2[len])
		/**si s1 en posicion de len es mayor a s2 en posicion de len so*/
		{
			return (s1[len] - s2[len]); /**Retorneme la diferencia de ambos*/
		}
	}
	return (0);
}
