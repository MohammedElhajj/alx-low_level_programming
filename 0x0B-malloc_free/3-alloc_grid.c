#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: A pointer to the grid or NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* If width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate space in memory for the grid */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
			/* Free everything if malloc fails */
			if (grid[i] == NULL)
			{
				for (i = i - 1; i >= 0; i--)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
		for (i = 0; j < width; j++)
			grid[i][j] = 0; /* Initialize each element to 0 */
		return (grid);
	}
}
