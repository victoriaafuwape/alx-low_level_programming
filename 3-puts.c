#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str++);
	}

	_putchar(10);
}
