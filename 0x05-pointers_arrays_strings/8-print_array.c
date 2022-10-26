#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: the int array to be printed
 * @n: number of int elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1) /* n - 1: last element of a */
			printf(", ");
	}

	printf("\n");
}
