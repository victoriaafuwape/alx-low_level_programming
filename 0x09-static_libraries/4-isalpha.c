/* Program that checks for alphabetic character */

#include "main.h"

/**
 * _isalpha - Entry point for program
 * @c: The character to check
 * Description - Program checks for alphabetic character
 *
 * Return: Always 0 indicates successful execution
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
