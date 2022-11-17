#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: the array of integers
 * @size: the size of the array
 * @action: a pointer to the function to be used
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
