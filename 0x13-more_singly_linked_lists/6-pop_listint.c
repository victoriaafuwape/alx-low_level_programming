#include "lists.h"

/**
 *  pop_listint - Deletes the head node.
 * @head: First arg.
 *
 * Return: Head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
