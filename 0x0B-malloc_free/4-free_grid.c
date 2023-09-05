#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a grid
 * @grid: to be freed
 * @height: of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
