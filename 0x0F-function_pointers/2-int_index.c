#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search in for the integer
 * @size: the size of the array
 * @cmp: a pointer to the comparison function
 *
 * Return: The index of the first element for which the cmp
 * function does not return 0 otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1); /* No element matches or negative size */
}
