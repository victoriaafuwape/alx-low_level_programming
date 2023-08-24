#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_index = 0;

	while (dest[dest_length])
	{
		dest_length++;
	}
	for (src_index = 0; src[src_index] && src_index < n; src_index++)
	{
		dest[dest_length++] = src[src_index];
	}
	dest[dest_length] = 0;
	return (dest);
}
