#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: strig to be scanned
 * @accept: string containing the characters to match
 *
 * Return: The number of bytes in s string containing bytes
 * from accept string only.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] != accept[j]
				break;
	}
	return (i);
}
