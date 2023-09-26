#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: First arg.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *freeNode;

	if (*head == NULL)
	{
		*head = head->next;
		freeNode = head;
		free(freeNode);
	}
}
