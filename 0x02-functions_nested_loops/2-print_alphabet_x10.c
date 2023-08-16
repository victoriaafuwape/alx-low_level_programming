/* Program that prints 10x the alphabet */

#include "main.h"

/**
 * print_alphabet_x10 - Entry point for the program
 * Description: Program prints 10x the alphabet
 *
 * Return: Always 0 indicates successful execution
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;

	while (i <= 9)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}

		_putchar(10);

		i++;
	}
}
