#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: the complete string
 */
void puts_half(char *str)
{
	int len = 0;

	/* len: length of the string */
	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\n')
	{
		_putchar(*str);
		str++
	}

	_putchar('\n');
}
