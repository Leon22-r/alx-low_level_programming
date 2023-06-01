#include "main.h"
/**
 * reverse_array - reverses an array.
 * @a: pointer of the array.
 * @n: numbers of elements.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int x;
	int arr[n];
	int y;

	y = 0;
	for (x = (n - 1); x >= 0; x++)
	{
		arr[y] = a[x];
		y++;
	}
	for (x = 0; x < n; x++)
	{
		a[x] = arr[x];
	}

}
