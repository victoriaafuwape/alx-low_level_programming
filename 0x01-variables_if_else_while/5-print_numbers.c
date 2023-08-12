/* Numbers program */

#include <stdio.h> /* Preprocessor directive */

/**
 * main - Entry point for the program
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');

	return (0);
}
