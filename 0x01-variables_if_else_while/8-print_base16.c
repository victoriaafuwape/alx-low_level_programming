/* Hexadecimal program */

#include <stdio.h> /* Preprocessor directive */

/**
 * main - Entry point for program
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	char hexa = '0';

	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}

	hexa = 'a';
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}

	putchar('\n');

	return (0);
}
