#include "main.h"

/**
 * print_number - prints an integer number
 * @n: the int number to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0) /* Base case */
	/* Recursive and extract the last digit*/
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
