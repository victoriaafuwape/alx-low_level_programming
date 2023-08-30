#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: the string being pointed to
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
