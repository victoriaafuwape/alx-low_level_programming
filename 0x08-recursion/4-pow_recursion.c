#include "main.h"

/**
 * _pow_recursion - function that returns the value of exponents
 * @x: base integer
 * @y: exponent
 *
 * Return: value of y, -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
