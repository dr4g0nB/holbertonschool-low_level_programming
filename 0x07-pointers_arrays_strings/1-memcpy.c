#include "holberton.h"

/**
 * _memcpy - Copies from src to dest.
 * @dest: Destination.
 * @src: From where it will be copy.
 * @n: unsigned int.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int buff;/**this is a buffer*/

	for (buff = 0; buff < n; buff++)
	/**this buffer will tmp store what recibes from dest till n bytes*/
	{
		dest[buff] = src[buff];
	/**copy whats on src to dest*/
	}
	return (dest);
}
