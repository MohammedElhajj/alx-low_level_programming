#include "main.h"

/**
 * print_line - draw  a straight line in the terminal
 * @n: the number of times the character '_' should be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
