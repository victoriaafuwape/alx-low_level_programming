#include "main.h"

/**
 * print_square - function name
 * @size: function's formal paramenter
 *
 * Return: Always 0 (success)
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar(35);
		}

		_putchar(10);
	}
}
