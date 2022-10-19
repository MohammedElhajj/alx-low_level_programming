#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int n, m, i;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			i = n * m;

			if (i <= 9)
				_putchar(' ');
			else
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
