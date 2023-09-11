#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d-> name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d-> owner = "(nil)";
	}
	printf("NName: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
