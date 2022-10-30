#include <stdio.h>

/**
 * main - print the largest prime factor max of a number
 * Return: Always 0.
 */
int main(void)
{
	long long int num = 612852475143;
	long long int i = 2;
	long long int max = 1;

	while (num != 0)
	{
		if (num % i != 0)
			i = i + 1;
		else
		{
			max = num;
			num = num / i;
			if (num == 1)
			{
				printf("%lld\n", max);
				break;
			}
		}
	}
	return (0);
}
