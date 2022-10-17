#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success0
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
