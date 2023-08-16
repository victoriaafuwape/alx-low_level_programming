/* Program that prints */

#include "main.h"

/**
 * print_last_digit - Function prints the last digit
 * @number: Number to be checked
 *
 * Return: 0 Always (success)
 */

int print_last_digit(int number)
{
	int iLastDigit;

	iLastDigit = number % 10;

	if (number < 0)
	{
		iLastDigit = iLastDigit * -1;
	}

	_putchar(iLastDigit + '0');
	return (iLastDigit);
}
