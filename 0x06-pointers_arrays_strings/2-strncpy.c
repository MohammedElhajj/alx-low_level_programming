#include "main.h"

/**
 * _strncpy - copies n bytes from src string into dest string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be copied from src to dest
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0; /* To get the length */
	int j = 0; /* Index */

	while (src[i])
		i++;

	/* Append n bytes from src string to the dest string */
	while (src[j] && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\n';
		j++;
	}

	return (dest);
}
