#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _calloc - creates calloc.
 * @nmemb: number of elements.
 * @size: the size of each element.
 * Return: the arrays created.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *x;

	x = malloc(nmemb * sizeof(size));
	if (x == NULL)
		return (NULL);

	
	return (x);
}
