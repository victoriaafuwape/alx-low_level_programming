/* Base 10 program */

#include <stdio.h> /* Preprocessor directive */

/**
 * main - Entry point for program
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
