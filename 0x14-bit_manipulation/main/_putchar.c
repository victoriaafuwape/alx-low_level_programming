#include <unistd.h>

/**
 * _putchar - Writes the character c to the standard output.
 * @c: Character to print.
 *
 * Return: 1 to indicate success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
