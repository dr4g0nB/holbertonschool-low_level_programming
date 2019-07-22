#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: New value.
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	/**d = malloc(sizeof());*/
	if (d == NULL)
	{}

	if (d->name == NULL)
	{
		printf("(nil)");
	}
	printf("Name: %s\n", d->name);

	if (d->age == '\0')
	{
		printf("(nil)");
	}
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	printf("Owner: %s\n", d->owner);
}
