#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int count;
	int n;

	for (count = 1; count <= 10; count++)
	{
		for (n = 0; n <= 14; n++)
			_putchar(n + 48);
		_putchar('\n');
	}
}
