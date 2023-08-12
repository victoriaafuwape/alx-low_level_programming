/* Alphabet game program */

#include <stdio.h> /* Preprocessor directive */

/**
 * main - Entry point for program
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	putchar('\n');

	return (0);
}
