#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array
 * @size: of array
 * @c: array content
 *
 * Return: to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
	{
		return (0);
	}

	j = (char *)malloc(sizeof(char) * size);

	if (j == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}

	return (j);
}
