#include "lists.h"

/**
 * free_list - Frees memory allocated for a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return:Void.
 */
void free_list(list_t *head)
{
	list_t *curNode;

	while (head != NULL)
	{
		curNode = head;
		head = head->next;
		free(curNode->str);
		free(curNode);
	}
}
