#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting from 0
 *
 * @n: The number to generate the times table for
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return (0);
	}

	for (int i = 0; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}
}
