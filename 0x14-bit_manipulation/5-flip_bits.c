#include "main.h"

/**
 * flip_bits - counts the number of bits that need to be
 * flipped  to get from one number to another
 * @n: the number to flip bits from
 * @m: the number to flip bits into
 *
 * Return: The number of bits need to be flipped to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_num;

	for (bits_num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits_num++;
	}

	return (bits_num);
}
