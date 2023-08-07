#include "main.h"
#include <stdlib.h>
/**
 * free_grid - dealocates  a 2D grid
 * @grid: grid
 * @height: height
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
