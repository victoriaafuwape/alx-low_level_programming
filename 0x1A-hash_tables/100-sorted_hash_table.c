#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array in the hash table
 *
 * Return: A pointer to the newly created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}
	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array and initialize it */
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Initialize array elements and sorted list pointers to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

#include "hash_tables.h"

/**
 * shash_table_set - Adds or updates an element in a sorted hash table
 * @ht: The sorted hash table you want to add or update the key/value to
 * @key: The key, cannot be an empty string
 * @value: The value associated with the key, must be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *tmp, *snode;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);
	snode = ht->shead;
	while (snode)
	{
		if (strcmp(snode->key, key) == 0)
		{
			free(snode->value);
			snode->value = strdup(value);
			return (1);
		}
		snode = snode->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (!ht->shead || strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		if (ht->shead)
			ht->shead->sprev = new_node;
		if (!ht->stail)
			ht->stail = new_node;
		ht->shead = new_node;
	} else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new_node->snext = tmp->snext;
		new_node->sprev = tmp;
		if (tmp->snext)
			tmp->snext->sprev = new_node;
		else
			ht->stail = new_node;
		tmp->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in a sorted htable
 * @ht: The sorted hash table to look into
 * @key: The key to find
 *
 * Return: The value associated with the element, or NULL if the key
 * couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	/* Traverse the sorted linked list */
	node = ht->shead;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		if (strcmp(node->key, key) > 0)
			return (NULL);

		node = node->snext;
	}

	return (NULL); /* Key not found */
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int comma_flag = 0;

	if (!ht)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (comma_flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		comma_flag = 1;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table to be printed
 *
 * Description: This function prints the key/value pairs of a sorted hash table
 * in reverse order, using the sorted linked list.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int comma_flag = 0;

	if (!ht)
		return;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (comma_flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		comma_flag = 1;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;

	if (!ht)
		return;

	/* Iterate over the sorted linked list and free the nodes */
	node = ht->shead;
	while (node)
	{
		tmp = node;
		node = node->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}

	/* Free the array and the hash table structure */
	free(ht->array);
	free(ht);
}
