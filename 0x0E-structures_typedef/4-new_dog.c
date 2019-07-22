#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Length.
 * @s: Pointer.
 * Return: len.

 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	;
	return (len);
}

/**
 * _strcpy - Copies.
 * @dest: Dest.
 * @src: src.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int tmp;

	for (tmp = 0; src[tmp] != '\0'; tmp++)
	{
		dest[tmp] = src[tmp];
		*(dest + 1) = *(src + 1);
	}
	dest[tmp] = '\0';
	return (dest);
}

/**
 * new_dog - New dog.
 * @name: Name.
 * @age: Age.
 * @owner: Owner.
 * Return: NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *n_name, *n_owner;
	int len, lenn, leng;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	/**Reservo bytes*/
	n_name = malloc(sizeof(char *) * (_strlen(name) + 1));
	if (n_name == NULL)
	{
		free(n_name);
		free(new_dog);
		return (NULL);
	}
	/** Copying and saving bytes*/
	n_name = _strcopy(n_name, name)
	n_owner = malloc(sizeof(char *) * (_strleng(owner) + 1));
	if (n_owner == NULL)
	{
		free(n_name);
		free(n_owner);
		free(new_dog);
		return (NULL);
	}
	/**Copia de owner a n_owner*/
	n_owner = _strcopy(n_owner, owner);
	/**Initialize the var*/
	new_dog->name = n_name;
	new_dog->age = age;
	new_dog->owner = n_owner;
	return (new_dog);
}
