#include "main.h"

/**
 * check_prime - recursively increase the value of the check variable i
 * @i: the check variable starting from 2
 * @n: the input integer number
 *
 * Return: 1 if n is a prime number otherwise return 0.
 */
int check_prime(int i, int n)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (check_prime(i + 1, n));
}

/**
 * is_prime_number - check if the input integer is a prime number
 * @n: the input integer number
 *
 * Return: 1 if the input n is a prime number otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (check_prime(2, n) == 1)
		return (1);
	else
		return (0);
}
