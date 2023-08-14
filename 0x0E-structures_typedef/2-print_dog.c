#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog
 *
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
	{
		(*d).name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
