/* Program prints every minute */

#include "main.h"

/**
 * jack_bauer - function name
 * void - function returns no value
 * void - function takes no arguments
 *
 * Return: void data type
 */

/* jack_bauer() definition */

void jack_bauer(void)
{
	int i1D;
	int i2D;
	int i3D;
	int i4D;

	for (i1D = 0; i1D <= 2; i1D++)
	{
		for (i2D = 0; i2D <= 9; i2D++)
		{
			if ((i1D <= 1 && i2D <= 9) || (i1D <= 2 && i2D <= 3))
			{
				for (i3D = 0; i3D <= 5; i3D++)
				{
					for (i4D = 0; i4D <= 9; i4D++)
					{
						_putchar(i1D + 48);
						_putchar(i2D + 48);
						_putchar(58);
						_putchar(i3D + 48);
						_putchar(i4D + 48);
						_putchar(10);
					}
				}
			}
		}
	}
}
