/* Combination program */

#include <stdio.h> /* Preprocessor directive */

/**
 * main - Entry point for the program
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar ('\n');

	return (0);
}
