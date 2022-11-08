#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts the string length
 * @s: the string
 * Return: The string length.
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: A pointer point to a newly allocated space in memory which contains
 * the contents of s1 followed by s2 and and null terminated oteherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, size;

	/* In case of an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the  total size */
	size = (_strlen(s1) + _strlen(s2)) + 1;
	/* Allocate space in memory */
	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			dest[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++)
		{
			dest[i] = s2[j];
			i++;
		}
		return (dest);
	}
}
