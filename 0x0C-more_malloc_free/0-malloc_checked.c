#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates a specific number of bytes in memory
 * @b: the number of bytes
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *t;  /* A general purpose pointer */

	t = malloc(b);

	/* Normal process termination if malloc fails */
	if (t == NULL)
		exit(98);
	return (t);
}
