#include <stdbool.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer, or 0 if there are no digits
 */

int _atoi(char *s)
{
	int result = 0;
	bool isNegative = false;

	/* Skip non-digit characters */
	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			isNegative = !isNegative;
		}
		s++;
	}

	/* Convert digit characters to integer */
	while (*s && (*s >= '0' && *s <= '9'))
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (isNegative ? -result : result);
}
