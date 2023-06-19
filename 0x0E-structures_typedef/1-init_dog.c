#include "dog.h"
#include "main.h"
/**
 * init_dog - initializes the data of the dog.
 * @d: the structure.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d->age = age;
	d->owner = *owner;
}
