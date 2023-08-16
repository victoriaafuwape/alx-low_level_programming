/* Program that prints alphabet */

#include "main.h"

/**
 * print_alphabet - Entry point for program
 * Description: Program prints alphabet
 *
 * Return: Always 0 to indicate successful execution
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
