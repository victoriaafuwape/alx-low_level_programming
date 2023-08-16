/* Program that prints the sign of a number */

#include "main.h"

/**
 * print_sign - Entry point for program
 * @n: The number to be checked
 * Description - Prints the sign of a program
 *
 * Return: 0, 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	return (0);
}
