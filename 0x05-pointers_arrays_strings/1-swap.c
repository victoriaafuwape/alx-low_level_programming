#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
