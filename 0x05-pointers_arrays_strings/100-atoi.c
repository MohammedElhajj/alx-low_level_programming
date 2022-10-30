#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be printed
 * Return: string as a number
 */
int _atoi(char *s)
{
	int nb = 0;
	int sign = 1;
	int i = 0; /* i:index */

	if (s[0] == '-') /* update sign for negative numbers */
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
		nb = nb * 10 + s[i] - '0';

	return (sign * nb);
}
