#include "main.h"

/**
 * _strncat - concatenates two strings dest and src
 * using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	/* Append n bytes from src string to the dest string */
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
