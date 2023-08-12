/* Reverse program */

#include <stdio.h> /* Preprocessor directive */

/**
 * main - Entry point for program
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}

	putchar('\n');

	return (0);
}
