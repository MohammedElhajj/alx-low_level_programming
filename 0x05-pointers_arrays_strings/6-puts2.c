#include "main.h"

/**
 * puts2 - print every other character of a string from the 1st
 * @str: the string as input
 * Return: the first char followed by the third one and so on
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
