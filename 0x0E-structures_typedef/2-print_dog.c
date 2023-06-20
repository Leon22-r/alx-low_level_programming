#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print's details of a dog.
 *
 * @d: the dog.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s/n", d->name);
		else
			printf("Name: (nil)");
		if (d->age)
			printf("Name: %f/n", d->age);
		else
			printf("Name: (nil)");
		if (d->owner)
			printf("Name: %s/n", d->owner);
		else
			printf("Name: (nil)");

	}
}
