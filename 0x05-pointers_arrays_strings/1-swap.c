#include "main.h"

/**
 * swap_int - swaps to numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
