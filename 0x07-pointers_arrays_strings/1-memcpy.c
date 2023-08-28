#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination where we are copying to
 * @src: the source where we are copying from
 * @n: number of bytes to be copied from src
 *
 * Return: a pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		dest[v] = src[v];
	}

	return (dest);
}
