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

	/**
	 *	if ( == NULL)
	 *{
	 *	printf("(nil)");
	 *}
	 */
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
