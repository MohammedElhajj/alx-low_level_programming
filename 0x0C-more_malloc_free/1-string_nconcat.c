#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2
 *
 * Return: A pointer point to a newly allocated space
 * in memory contains s1 followed by n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length_s1 = 0, length_s2 = 0, i;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Determine the number of bytes : string length */
	while (s1[length_s1] != '\0')
		length_s1++;
	while (s2[length_s2] != '\0')
		length_s2++;
	/* Use the entire string s2 in the following case */
	if (n >= length_s2)
		n = length_s2;

	/* Allocate the new memory space */
	concat = malloc((length_s1 + n + 1) * sizeof(char));
	/* Return NULL in cse malloc fails */
	if (concat == NULL)
		return (0);

	/* Concatenates the two strings */
	for (i = 0; i < length_s1; i++)
		concat[i] = s1[i];
	for (; i < (length_s1 + n); i++)
		concat[i] = s2[i - length_s1];
	concat[i] = '\0';
	return (concat);
}
