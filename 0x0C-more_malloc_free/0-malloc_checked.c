#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function allocates memory using malloc
 * @b: size to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
