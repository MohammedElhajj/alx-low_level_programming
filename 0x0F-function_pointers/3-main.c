#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count (number of arguments)
 * @argv: argumet victor (array of arguments)
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	/* Declare var for the 2 numbers and the operation result */
	int num1, num2, calc;
	char operator;
	int (*func)(int, int); /* A function pointer */

	/* If the number of arguments is wrong */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert from the string input to int */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	/* If the operator is none of the five op in the program */
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	/* If the user tries to divide (/ or %) by 0 */
	operator = *argv[2];
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = func(nm1, num2);
	printf("%d\n", calc);

	return (0);
}
