#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: the string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int i = 0; /* i is the index */
	int j;

	while (s[i] != '\0') /* to calculate the length */
		i++;

	for (j = 0; j < i; j++)
	{
		i--; /* from s[0] to s[i - 1] */
		rv = s[j];
		s[j] = s[i];
		s[i] = rv;
	}
}
