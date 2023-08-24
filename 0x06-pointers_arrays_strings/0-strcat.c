#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length] != 0)
	{
		length++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';
	return (dest);
}
