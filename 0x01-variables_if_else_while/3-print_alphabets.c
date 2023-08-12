/* Alphabet game program */

#include <stdio.h> /* Preprocessor directive */

/**
 * main -Entry point for program
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar (letter);
		letter++;
	}

	putchar ('\n');

	return (0);
}
