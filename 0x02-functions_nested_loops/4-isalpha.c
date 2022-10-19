#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked in ASCII code
 *
 * Return: 1 if the letter is lowercase or uppercase, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
