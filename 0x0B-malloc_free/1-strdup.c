#include "main.h"
#include <stdlib.h>

/**
 * _strlen - count the length of the string
 * @st: the string
 * Return: The length of the string.
 */
int _strlen(char *st)
{
	unsigned int i = 0;

	while (st[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copy the string from source to destination
 * @dest: the destination string
 * @src: the source string from where we copy
 * Return: A pointer to  destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string given as a parameter
 * Return: A pointer to the duplicated string otherwise
 * returns NULL if str = NULL or insufficient memory.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int size;

	if (str == 0)
		return (NULL);

	size = _strlen(str) + 1;
	s = (char *) malloc(size * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		_strcpy(s, str);
		return (s);
	}
}
