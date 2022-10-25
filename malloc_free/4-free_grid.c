#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: the given value
 * @height: the given value
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
