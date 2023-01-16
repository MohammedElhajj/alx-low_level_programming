#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: value to be filled
 * @n: number of bytes of the memory area to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = b;
	return (s);
}
