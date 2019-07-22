#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Name.
 * @age: Age.
 * @owner: Owner.
 * Return: NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *n_name;
	char *n_owner;
	int len, lenn;
	int leng;
	/**checking if there is something*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	/**Recorro*/
	for (len = 0; name[len] != '\0'; len++)
	{}
	/**Reservo bytes*/
	n_name = malloc(sizeof(char) * (len + 1));
	if (n_name == NULL)
	{
		free(n_name);
		free(new_dog);
		return (NULL);
	}
	/** Recorro a owner */
	for (leng = 0; owner[leng] != '\0'; leng++)
	{}

	n_owner = malloc(sizeof(char) * (leng + 1));
	if (n_owner == NULL)
	{
		free(n_name);
		free(n_owner);
		free(new_dog);
		return (NULL);
	}
	/**copy n_name = name */
	for (lenn = 0; lenn < len; lenn++)
	{
		n_name[lenn] = name[lenn];
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
