#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates array holding a specific character.
 * @size: number of arrays
 * @c: the character.
 * Return: the arrays created.
 */
char *create_array(unsigned int size, char c)
{
	char *f;
	unsigned int i;

	f = '\0';
	if (size <= 0)
		return (f);
	f = malloc(sizeof(char) * size);
	if (f != NULL)
	{
		for (i = 0; i < size; i++)
		{
			f[i] = c;
		}
		return (f);
	}
	else
	{
		f = '\0';
		return (f);
	}
}
