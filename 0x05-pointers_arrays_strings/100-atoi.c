#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be printed
 * Return: string as a number
 */
int _atoi(char *s)
{
	unsigned int nb = 0;
	int sign = 1;
	int i = 0; /* i:index */

	for (; !(s[i] >= '0' && s[i] <= '9') && s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -1 * sign;
		if (s[i] == '+')
			sign = +1 * sign;
	}

	for (; s[i] >= '0' && s[i] <= '9' && s[i] != '\0'; i++)
		nb = nb * 10 + s[i] - '0';

	return (sign * nb);
}
