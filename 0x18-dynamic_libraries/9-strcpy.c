#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: character data type
 */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; src[v] != 0; v++)
	{
		dest[v] = src[v];
	}

	dest[v++] = 0;

	return (dest);
}
