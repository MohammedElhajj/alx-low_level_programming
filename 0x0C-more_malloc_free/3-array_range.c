#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -  creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: A pointer to the array otherwise NULL.
 */
int *array_range(int min, int max)
{
	int *a; /* A pointer to the newly created array */
	int i; /* Index for the while loop */
	int v = min;

	/* Return NULL if min is grater than max or malloc fails */
	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);

	/* Loop to create the array */
	i = 0;
	while (i <= max - min)
	{
		a[i] = v;
		i++;
		v++;
	}
	return (a);
}
