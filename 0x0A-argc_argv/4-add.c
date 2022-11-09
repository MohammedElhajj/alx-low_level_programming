#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_str - checks if string contains digits only
 * @str: the string
 *
 * Return: 1 if success otherwise returns 0.
 */
int check_str(char *str)
{
	unsigned int i; /* Index */

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
			return (0);
		/* To represent false */
		i++;
	}
	return (1); /* To represent true */
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success) otherwise returns 1.
 */
int main(int argc, char *argv[])
{
	int j; /* Index for loop */
	int sum = 0;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
		/* Check if the string contains digits only */
			if (check_str(argv[j]))
				sum += atoi(argv[j]);
		/* In case the string contains symbols */
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n". sum);
	}
	return (0);
}
