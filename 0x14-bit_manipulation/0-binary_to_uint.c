#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i; /* String index */

	/* Return 0 if b is NULL */
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Return 0 if there is a char in b other than 0 and 1 */
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
