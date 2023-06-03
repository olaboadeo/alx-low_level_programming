#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees the 2d array created
  * @grid: 2d array
  * @height: height of the array
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
