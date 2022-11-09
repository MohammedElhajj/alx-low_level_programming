#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success otherwise returns 1.
 */
int main(int argc, char *argv[])
{
	int i, amount, min, j;
	int coins[] = {25, 10, 5, 2, 1};

	/* Set the initial value to 0 */
	amount = min = i = j = 0;

	/* In case  the number of arguments is not exactly 1 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]); /* Pass the argument as int */
	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}

	/* Loop to calculate the minimum number of coins */
	while (coins[i] != '\0')
	{
		if (amount >= coins[i])
		{
			j = amount / coins[i];
			min += j;
			amount -= coins[i] * j;
		}
		i++;
	}
	printf("%d\n", min);
	return (0);
}
