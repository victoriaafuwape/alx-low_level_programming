#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function takes two strings as input and concatenates them
 * @s1: represents the first string to be concatenated
 * @s2: represents the second string to be concatenated
 *
 * Return: a pointer to the resulting concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t length = 0;
	int v = 0;
	char *cat;
	char *result;

	if (s1 == 0)
		s1 = "";
	if (s1 == 0)
		s2 = "";
	while (s1[length] != 0)
		length++;
	while (s2[v] != 0)
	{
		v++;
		length++;
	}
	cat = (char *)malloc(sizeof(char) * (length + 1));
	result = cat;
	if (cat == 0)
		return (0);
	while (*s1 != 0)
	{
		*cat = *s1;
		s1++;
		cat++;
	}
	while (*s2 != 0)
	{
		*cat = *s2;
		s2++;
		cat++;
	}
	*cat = 0;
	return (result);
}
