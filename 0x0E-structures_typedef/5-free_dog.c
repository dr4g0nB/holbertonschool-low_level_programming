#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs.
 * @d: new valur.
 * Return: Nothing.
 */

 void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	/**free(d->age);*/
	free(d->owner);
	free(d);
}
