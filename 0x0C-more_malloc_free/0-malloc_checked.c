#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * malloc_checked - creates a memory space.
 * @b: the memory space to create.
 * Return: pointer to the allocated space.
 */
void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}
