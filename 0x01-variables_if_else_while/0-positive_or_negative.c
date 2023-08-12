/* Random number generator program */

#include <stdio.h> /* Preprocessor directive */
#include <stdlib.h> /* Preprocessor directive */
#include <time.h> /* Preprocessor directive */

/**
 * main - Entry point for program
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * printf - Prints the value of the integer
	 * @n: The random integer
	 *
	 * printf uses if-else statements to print the result of the program
	 */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
