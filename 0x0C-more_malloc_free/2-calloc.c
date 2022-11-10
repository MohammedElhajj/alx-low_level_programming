#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements of the array
 * @size: the size of each element in bytes
 *
 * Return: A pointer to the allocated memory otherwise NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	/* Return NULL if the number of elements or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Allocate memory for the array and check */
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	/* Set the memory to zero */
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
