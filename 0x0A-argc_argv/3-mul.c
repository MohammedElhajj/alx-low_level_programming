#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success otherwise returns 1.
 */
int main(int argc, char *argv[])
{
	int m, n;

	if (argc == 3)
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", m * n);
		return (0);
	}

	printf("Error\n");
	return (1);
}
