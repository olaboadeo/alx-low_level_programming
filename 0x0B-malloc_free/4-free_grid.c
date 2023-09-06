#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees a 2d array
  *@grid: 2d array to be freed
  *@height: row of array to be freed
  */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
