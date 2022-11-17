#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the  number of the arguments (parameters)
 *
 * Return: The sumation of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;

	if (n == 0)
		return (0);

	/* Initializing arguments to store all values after n */
	va_start(arguments, n);
	for (unsigned int i = 0; i < n; i++)
	{
		/* Sum all the inputs */
		sum += va_arg(arguments, int);
	}
	va_end(arguments);

	return (sum);
}
