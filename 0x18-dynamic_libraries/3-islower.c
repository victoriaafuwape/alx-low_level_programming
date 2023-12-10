/* Program that checks for lowercase character */

#include "main.h"

/**
 * _islower - Entry point for program
 * Description - Program checks for lowercase character
 * @c: The character to check
 *
 * Return: Always 0 to indicate successful execution
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
