#include <stddef.h>
#include "dog.h"
#include "stdlib.h"
/**
 * new_dog - stores info of a new dog
 * @name: it's name
 * @age: it's age.
 * @owner: the  owner.
 * Return: the new structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}