#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 *
 * Result: nothing
 */

void rev_string(char *s)
{
	char a = s[0];
	int b = 0;
	int v;

	while (s[b] != 0)
	{
		b++;
	}

	for (v = 0; v < b; v++)
	{
		b--;
		a = s[v];
		s[v] = s[b];
		s[b] = a;
	}
}
