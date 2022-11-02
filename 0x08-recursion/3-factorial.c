#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the integer number
 *
 * Return: -1 to indicate an error if n is less than 0
 * otherwise returns the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
