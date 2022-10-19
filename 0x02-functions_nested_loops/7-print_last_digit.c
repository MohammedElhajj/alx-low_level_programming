#include "main.h"

/**
 * print_last_digit - Prints the last digit of an int number
 * @i: an integer number (input)
 *
 * Return: The value of the last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (j >= 0)
	{
		_putchar(j + 48);
		return (j);
	}
	else
	{
		_putchar(-j + 48);
		return (-j);
	}
}
