#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer poin to the bit
 * @index: the index starting from 0 of the bit you want to set
 *
 * Return: 1 (success) otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64) /* 64: sizeof(unsigned int) * 8 */
		return (-1);
	*n ^= (1 << index);

	return (1);
}
