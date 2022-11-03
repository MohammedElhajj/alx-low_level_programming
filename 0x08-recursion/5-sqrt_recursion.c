#include "main.h"

/**
 * _sqrt_wrapper - recursively increase the value of the check variable root
 * @root: the check variable starting from 1
 * @n: the input integer number
 *
 * Return: The root value of n otherwise -1.
 */
int _sqrt_wrapper(int root, int n)
{
	if (root * root == n)
		return (root);
	else if (root * root < n)
		return (_sqrt_wrapper(root + 1, n));
	else
		return (-1);
}

/**
 * _sqrt_recursion - find the root value of an integer number
 * @n: the input integer number
 *
 * Return: The natural square root of n or -1 if n does not have one's.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_wrapper(1, n));
}
