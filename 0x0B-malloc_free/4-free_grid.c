#include "main.h"
#include <stdlib.h>
/**
 * free_grid - used to free grid
 * @grid: Grid parameter
 * @height: height of grid
 *
 *
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
