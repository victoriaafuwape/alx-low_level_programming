/* Function that checks for a digit */

#include "main.h"

/**
 * _isdigit - function name
 * @c: function's formal parameter
 *
 * Return: 1 if argument is a digit, 0 if otherwise
 */

/* _isdigit(int c) definition */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);
}
