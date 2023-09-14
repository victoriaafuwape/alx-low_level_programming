#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers + new line
 * @separator: number separator
 * @n: number
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list para;

	va_start(para, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(para, int));
		}
		else if (separator != NULL && i == 0)
		{
			printf("%d", va_arg(para, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(para, int));
		}
	}
	va_end(para);
	putchar(10);
}
