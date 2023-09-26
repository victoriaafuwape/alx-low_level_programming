#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: The head pointer to the first node in the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
