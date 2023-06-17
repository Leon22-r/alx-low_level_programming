#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _realloc - reallocates memory from old__size to new_size.
 * @ptr: memory space to alter.
 * @old_size: the previous size
 * @new_size: the new size required.
 * Return: pointer to the new memory space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new = malloc(new_size);
		for (i = 0; i < old_size; i++)
			new[i] = ptr[i];
		free(ptr);
		return (new);
	}
}
