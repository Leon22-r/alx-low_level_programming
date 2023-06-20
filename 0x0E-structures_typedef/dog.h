/**
 * struct dog - gives the name age and owner.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
