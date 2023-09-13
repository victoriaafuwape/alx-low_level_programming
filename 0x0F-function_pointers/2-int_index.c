#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function searches for an integer
 * @array: to search through
 * @size: of the array
 * @cmp: pointer to the function to use to compare
 *
 * Return: a lot of things
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
