#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates an array of numbers.
 * @min: min value of the array.
 * @max: max value of the array.
 * Return: the array.
 */
int *array_range(int min, int max)
{
	int *array;
	int noarr, i;

	if (min > max)
		return (NULL);
	if (min == 0)
		noarr = max;
	else
		noarr = (max - min) + 1;
	array = malloc(sizeof(int) * noarr);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < noarr)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
