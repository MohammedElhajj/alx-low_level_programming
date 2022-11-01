#include "main.h"
#include <stddef.h>

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
	char *s_char = s;

	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			return (s_char);
		s++;
	}
	return (NULL);
}
