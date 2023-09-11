#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @d: dog to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
