#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function prints a name
 * @name: name to be printed
 * @f: pointer to function that prints
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
