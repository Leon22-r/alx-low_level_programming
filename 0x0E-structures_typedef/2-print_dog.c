#include "dog.h"
#include <stdio.h>
#include <stddef.h>
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
		if (d->name != NULL)
			printf("Name: %s/n", d->name);
		else
			printf("Name: (nil)");
		if (d->age)
			printf("Name: %f/n", d->age);
		else
			printf("age: (nil)");
		if (d->owner != NULL)
			printf("Name: %s/n", d->owner);
		else
			printf("owner: (nil)");

	}
}
