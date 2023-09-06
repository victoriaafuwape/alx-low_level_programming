#include <stdlib.h>
#include "main.h"

/**
 * argstostr - cats args
 * @ac: param
 * @av: param
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int length = 0;
	int i, j;
	int k = 0;

	if (ac == 0 || av == 0)
		return ('\0');
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
		length++;
		j = 0;
	}
	str = (char *)malloc(length + 1);
	if (str == NULL)
		return ('\0');
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}
