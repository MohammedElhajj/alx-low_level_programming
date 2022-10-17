#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits (ab)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= 9; a++)
	{
		for (b = '0'; b <= 9; b++)
		{
			if ((a != b) && (b > a))
			{
				putchar(a);
				putchar(b);
				if ((a != 8) && (b != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
