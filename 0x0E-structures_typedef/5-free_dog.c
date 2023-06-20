#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free up space.
 * @d: the dog's address.
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
