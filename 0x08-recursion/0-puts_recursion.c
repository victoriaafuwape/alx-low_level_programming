#include "main.h"

/**
 * _puts_recursion - function prints a string, followed by a new line
 * @s: pointer to the string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1); /* Recursive case */
	}

	/* Base Case */
	if (*s == '\0')
	{
		_putchar(10);
	}
}
