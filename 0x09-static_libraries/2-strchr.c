#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string where we're locating a character
 * @c: character to be located in the string
 *
 * Return: a pointer to the first time c is found,
 * or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int v = 0;

	while (s[v] != c && s[v] != '\0')
	{
		v++;
	}
	if (s[v] == c)
	{
		return (&s[v]);
	}

	else
	{
		return ('\0');
	}
}
