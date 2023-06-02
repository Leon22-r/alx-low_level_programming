#include "main.h"
/**
 * reverse_array - reverss an array.
 * @a: pointer of the array.
 * @n: numbers of elements.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int x;
	int i = n;
	int arr[i];
	int y;

	x = 0;
	y = n - 1;
	while (x < n)
	{
		arr[x] = a[y];
		x++;
		y--;
	}
	x = 0;
	while (x < n)
	{
		a[x] = arr[x];
		x++;
	}
}
