#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary representation
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		/* Right shift n by 1 bit and recursive function call */
		print_binary(n >> 1);
	/* Print the bits of number */
	_putchar((n & 1) + '0');
}
