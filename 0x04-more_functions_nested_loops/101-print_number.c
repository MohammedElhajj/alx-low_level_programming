#include "main.h"

/**
 * print_number - print an integer number
 * @n: the int number to be printed
 */
void print_number(int n)
{
	unsigned long int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) != 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
