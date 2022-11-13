#include "main.h"

/**
 * print_number - prints an integer number
 * @n: the int number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if ((n / 10) > 0) /* Base case */
	/* Recursive and extract the last digit*/
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
