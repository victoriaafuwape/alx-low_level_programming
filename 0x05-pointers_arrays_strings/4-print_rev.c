#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: parameter
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int v = 0;
	int c;

	for (; *s != '\0'; s++)
	{
		v++;
	}

	s--;

	for (c = v; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
