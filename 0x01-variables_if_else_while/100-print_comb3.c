#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 indicates successful execution
 */

int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit < 9; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
		{
			putchar('0' + first_digit);
			putchar('0' + second_digit);

			if (first_digit != 8 || second_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
