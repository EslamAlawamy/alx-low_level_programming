#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - main
 * @width: wi
 * @height: he
 * Return: is grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);
			if (grid[w] == NULL)
			{
				for (int i = 0; i < w; i++) 
				{
					free(grid[i]);
				}
				free(grid);
				return NULL;
			}
	}
	for (w = 0; w < height; w++)
	{
		for (j = 0; j < height; j++)
			grid[w][j] = 0;
	}
	return (grid);
}
