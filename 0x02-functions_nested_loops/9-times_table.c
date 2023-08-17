/* Program prints the times table */

#include "main.h"

/**
 * times_table - function name
 * void - function returns no value
 * void - function takes no arguments
 *
 * return: void data type
 */

/* times_table() definition */

void times_table(void)
{
	int x;
	int y;
	int z;
	int u;
	int d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + 48);
				_putchar(u + 48);
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + 48);
			}
		}

		_putchar(10);
	}
}
