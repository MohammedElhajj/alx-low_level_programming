#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	/* Initialize counter */
	int passwd, i;

	/**
	 * Seed the random password generator with
	 * current time to create different values
	 */
	srand(time(NULL));

	i = 0;
	while (i <= 2645)
	{
		passwd = (rand() % 128);
		i += passwd;
		printf("%c", passwd);
	}

	printf("%c", 2772 - i);
	return (0);
}
