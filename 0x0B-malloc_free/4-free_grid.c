#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the 2-dimensional array of integers.
 * @grid: 2-dimensional array of integers to be freed.
 * @height: height of grid.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

