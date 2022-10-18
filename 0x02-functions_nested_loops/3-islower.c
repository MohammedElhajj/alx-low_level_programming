#include "main.h"

/**
 * _islower - Check if a char is lowercase
 * @cc: is the character to be checked as int in ASCII code
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
