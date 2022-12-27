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
	int i = 0; /* Index */

	/* Copy and replace n bytes from src string to the dest string */
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\n';
	}

	return (dest);
}
