#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s: string being measured
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
	}

	else if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s) + 1);
}
