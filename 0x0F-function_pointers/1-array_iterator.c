#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function executes a function on an array
 * @array: array to execute on
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
