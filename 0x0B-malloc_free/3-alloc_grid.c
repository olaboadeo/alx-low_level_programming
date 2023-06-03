#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - creates a 2d array of integers
  * @width: width of grid
  * @height: height of grid
  *
  * Return: NULL if height or width = 0
  * pointer to 2d array if otherwise
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = NULL;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}

	}
	return (arr);
}
