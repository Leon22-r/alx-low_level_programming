#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free's a 2 dimension array.
 * @grid: the array.
 * @height: it's height.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
