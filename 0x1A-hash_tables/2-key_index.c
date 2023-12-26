#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: The key to find the index for
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* Compute hash value for the key */
	hash = hash_djb2(key);

	/* Modulate to fit the size of the hash table array */
	return (hash % size);
}
