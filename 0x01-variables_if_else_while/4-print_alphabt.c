/* Alphabet soup game program */

#include <stdio.h> /* Preprocessor directive */

/**
 * main - Entry point for program
 *
 * Return: 0 indicates successful entry
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar (lowercase);
		}
		lowercase++;
	}
	putchar('\n');

	return (0);
}
