#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the initial value of the array
 *
 * Return: A pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);

	/* Allocate block of memory */
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		/* Assign the value of c to the array */
		i = 0;
		while (i < size)
		{
			buffer[i] = c;
			i++;
		}
		return (buffer);
	}
}
