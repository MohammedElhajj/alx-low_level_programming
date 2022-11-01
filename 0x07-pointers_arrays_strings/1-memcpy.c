#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destenation memory area
 * @src: the source memory area
 * @n: the number of bytes to be copied
 * from source to destination
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *pdest = dest;
	char *psrc = src;

	for (i = 0; i <= n; i++)
		pdest[i] = psrc[i];
	return (pdest);
}
