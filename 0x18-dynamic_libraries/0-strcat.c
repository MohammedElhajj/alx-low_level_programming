#include "main.h"

/**
 * _strcat - concatenates two strings dest and src
 * @dest: the destination string
 * @src: the source string
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	/* Append the src string to the dest string */
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
