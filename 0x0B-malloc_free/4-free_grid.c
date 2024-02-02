#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: 2 dimensional grid
 * @height: height of grid
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}
	free(grid);
}
