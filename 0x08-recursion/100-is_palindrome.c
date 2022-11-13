#include "main.h"

/**
 * _strlen - calculates the length of the string
 * @s: the string
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * check_palindrome - check every char in the string
 * @i: the lower index starting from zero
 * @j: the upper index starting from length of the string -1
 * @s: the string to be checked
 *
 * Return: 1 if success or string is empty otherwise 0.
 */
int check_palindrome(char *s, int i, int j)
{
	/* An empty string */
	if (s == NULL || i < 0 || j < 0)
		return (1);
	if (i >= j) /* Base case */
		return (1);
	if (s[i] == s[j]) /* Recursion */
		return (check_palindrome(s, i + 1, j - 1));
	return (0);
}

/**
 * is_palindrome - check if a string is a palindrome or not
 * @s: the string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (check_palindrome(s, 0, _strlen(s) - 1) == 1)
		return (1);
	else
		return (0);
}
