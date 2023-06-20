#include <stddef.h>
#include "dog.h"
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

	if (name && age && owner)
	{
		new->name = name;
		new->age = age;
		new->owner = owner;
		return (new);
	}
	return (NULL);
}
