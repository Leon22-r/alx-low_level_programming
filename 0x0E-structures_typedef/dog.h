#ifndef STRUCTURE
#define STRUCTURE

/**
 * struct dog - gives the name age and owner.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
