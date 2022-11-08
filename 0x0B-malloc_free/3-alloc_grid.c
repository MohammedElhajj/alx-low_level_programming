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
			grid[i] = malloc(sizeof(int) * width);
		for (i = 0; j < width; j++)
			grid[i][j] = 0; /* Initialize each element to 0 */
		return (grid);
	}
}
