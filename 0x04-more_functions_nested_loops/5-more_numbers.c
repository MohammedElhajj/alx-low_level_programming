#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int count, int n;

	for (count = 0; count <= 9; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + 48);
			}
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
