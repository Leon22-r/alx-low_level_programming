#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: the array.
 * @size: the size of the array.
 * @cmp: functions that compares.
 * Return: index where the number is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x > 0)
				return (i);
		}
	}
	return (-1);
}
