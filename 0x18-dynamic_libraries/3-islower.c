#include "main.h"

/**
 * _islower - Checks if a char is lowercase
 * @c: The character to be checked in ASCII code
 *
 * Return: 1 if char is lowercase character, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
