#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: memory area pointed to
 * @b: constant byte that is used to fill
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
