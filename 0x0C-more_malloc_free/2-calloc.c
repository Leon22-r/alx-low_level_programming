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
	char *x;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);

	nmemb *= size;
	while (nmemb--)
		x[nmemb] = 0;

	return ((void *)x);
}
