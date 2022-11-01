#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be scanned
 * @c: the character to be searched in s
 *
 * Return: A pointer to the first occurrence of c
 * or NULL in case c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
