#include "main.h"

/**
 * flip_bits - ok
 * @n: ok
 * @m: ok
 * Return: ok
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int j = 0;

	while (i)
	{
		j++;
		i &= i - 1;
	}
	return (j);
}
