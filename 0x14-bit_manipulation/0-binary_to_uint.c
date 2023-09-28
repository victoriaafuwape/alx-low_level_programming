#include "main.h"

/**
 * binary_to_unit - Converts a binary to an unsigned integer.
 *@b: Given binary.
 *
 * Return: The converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		count = (count << 1) | (*b - '0');
		b++;
	}
	return (count);
}
