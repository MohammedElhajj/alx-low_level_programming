#include <stdio.h>

/**
 * main - The first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1 = 1, num2 = 2, num3;
	int count = 0;

	printf("%d, ", num1);
	printf("%d, ", num2);
	count = 2;
	while (count < 50)
	{
		num3 = num1 + num2;
		count++;
		if (count < 50)
			printf("%d, ", num3);
		else
			printf("%d", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
	return (0);
}
