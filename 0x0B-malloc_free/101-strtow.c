#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @str: string to split int o words
 * Return: number of words
 */

int count_word(char *str)
{
	int start = 0;
	int index = 0;
	int count = 0;

	while (str[index] != '\0')
	{
		if (str[index] == ' ')
		{
			start = 0;
		}
		else if (start == 0)
		{
			start = 1;
			count++;
		}
		index++;
	}
	return (count);
}

/**
 * strtow - function splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
