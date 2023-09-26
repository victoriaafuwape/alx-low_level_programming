#include "lists.h"

/**
 * listint_len - Gets the number of elements in a linked listint_t list.
 * @h: The head pointer to the first node in the list.
 *
 * Return: Number of elements present.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
