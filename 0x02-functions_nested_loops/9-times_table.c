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
		for (m = 0; m <= 9; m++)
		{
			i = n * m;
			if (i < 10)
			{
				_putchar(' ');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
