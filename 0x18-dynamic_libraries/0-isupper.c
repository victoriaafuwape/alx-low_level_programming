/* Function that checks for uppercase character */

#include "main.h"

/**
 * _isupper - function name
 * @c: function's formal parameter
 *
 * Return: 1 if argument is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
