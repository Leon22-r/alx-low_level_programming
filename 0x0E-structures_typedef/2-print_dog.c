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
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Name: %f\n", d->age);
	if (d->owner)
		printf("Name: %s\n", d->owner);
	else
		printf("owner: (nil)\n");

}
