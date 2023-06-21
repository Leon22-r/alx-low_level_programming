#include "function_pointers.h"
/**
 * array_iterator - goes through each element of an array.
 * array: the array.
 * @size: the size of the array.
 * @action: the function to use on the elements of the array
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (actiion)
	{
		for (i = 0; i < size; i++)
		{
			action(i);
		}
	}
}
