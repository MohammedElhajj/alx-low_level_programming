#include "main.h"

/**
 * print_rev - print a string, in reverse
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int i = 0; /* i: string index */

	while (s[i] != '\0')
	{
		s++;
		i++;
	}
	for (i = i; i <= 1; i--)
		_putchar(s[i]);

	_putchar('\n');
}
