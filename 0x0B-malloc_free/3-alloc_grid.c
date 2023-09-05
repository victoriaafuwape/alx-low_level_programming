#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function allocates a 2-dimensional array of integers
 * @width: dimension of the grid to be allocated
 * @height: dimension of the grid to be allocated
 *
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0)
		return (0);
	if (height <= 0)
		return (0);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = (0);
	}
	return (grid);
}
