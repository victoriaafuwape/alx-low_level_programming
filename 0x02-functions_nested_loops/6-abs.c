/* Absolute value program */

#include "main.h"

/**
 * _abs - Function name defined
 *
 * Return: Always 0 (success)
 */

int _abs(int number)
{
	int absv;

	if (number < 0)
	{
		absv = -number;

		return (absv);
	}

	else if (number > 0)
	{
		absv = number;

		return (absv);
	}

	return (number);
}
