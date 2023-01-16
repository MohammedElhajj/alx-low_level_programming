#include "main.h"

/**
 * _strcpy - copy the string pointed to by src
 * @src: pointed to the string to be copied
 * @dest: pointed to the new address
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
