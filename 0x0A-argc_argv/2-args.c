#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments the program receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i; /* Index for the loop */

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
