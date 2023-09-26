#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: First arg.
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while (head)
	{
		freeNode = head;
		head = head->next;
		free(freeNode);
	}
}
