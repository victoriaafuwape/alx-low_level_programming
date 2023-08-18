#include "main.h"

/**
 * more_numbers - function name
 *
 * Return: 0 for success
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)

				_putchar(49);

			_putchar(b % 10 + 48);

		}

		_putchar(10);

	}

}
