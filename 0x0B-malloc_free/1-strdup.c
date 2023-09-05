#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string
 * @str: to copy
 *
 * Return: copied string
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *k;

	if (str == 0)
	{
		return (0);
	}
	while (str[i] != 0)
	{
		i++;
	}
	k = (char *)malloc(sizeof(char) * i + 1);

	if (k == 0)
	{
		return (0);
	}
	while (str[j] != 0)
	{
		k[j] = str[j];
		j++;
	}

	k[j] = 0;

	return (k);
}
