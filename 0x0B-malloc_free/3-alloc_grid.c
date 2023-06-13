#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * alloc_grid - makes a 2 dimension array.
 * @width: the width.
 * @height: its height.
 * Return: the array.
 */
int **alloc_grid(int width, int height)
{
	int **arr = malloc(sizeof(int *) * height);
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(sizeof(int) * width);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
