#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k, m;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			m = size - i;
			for (j = 1; j <= m; j++)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
