#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *curNode = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (curNode->next != NULL)
		{
			curNode = curNode->next;
		}
		curNode->next = newNode;
	}
	return (newNode);
}
