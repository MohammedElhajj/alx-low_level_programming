#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: the character in ASCII code as integer
 *
 * Return: 1 if c is uppercase otherwise returns 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
