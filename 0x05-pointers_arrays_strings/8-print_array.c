#include <stdio.h>
#include "main.h"
/**
 * print_array - prints an array.
 * @a: pointer of the first array element.
 * @n: number of elements to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int y;

	if (n <= 0)
		printf("\n");

	for (y = 0; y < n; y++)
	{
		if (y == n - 1)
		{
			printf("%d\n", *(a + y));
			continue;
		}
		printf("%d, ", *(a + y));
	}
}
