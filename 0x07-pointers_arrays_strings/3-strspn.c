#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept:number of bytes allowed in the prefix substring
 *
 * Return: the length of the prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;


	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				i++;
				break;
			}

			else if ((accept[j + 1]) == '\0')
				return (i);
		}
		s++;
	}

	return (i);
}
