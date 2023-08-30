#include "main.h"

/**
 * factorial - function returns the factorial of a given number
 * @n: given number
 *
 * Return: value of factorial, -1 if n is negative
 */

int factorial(int n)
{
	/* Base case */
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
