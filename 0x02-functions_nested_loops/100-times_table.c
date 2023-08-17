#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}

/**
 * print_times_table - Prints the n times table starting from 0
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

int main(void)
{
	print_to_98(5);
	print_times_table(7);
	return (0);
}
