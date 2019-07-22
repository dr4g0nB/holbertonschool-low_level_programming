#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initialize the variables.
 * @d: Creates a new value.
 * @name: Name.
 * @age: Age.
 * @owner: Owner.
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/**Initializing the variables of the struct*/
	if (d == NULL)
	{}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
