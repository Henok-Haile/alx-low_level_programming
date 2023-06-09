#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: pointer to the hash table.
 * @key: key to be addded, can not be empty.
 * @value: the value associated wit the key.
 *
 * Return: 0 if failed else 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (key == NULL)
		return 0;

	// Get the hash value for the key
	unsigned long int hash = hash_djb2(key);

	// Calculate the index of the key in the hash table
	unsigned long int index = hash % ht->size;

	// Check if the key already exists in the hash table
	hash_node_t *node = ht->array[index];
	while (node != NULL && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}

	// If the key does not exist, create a new node and add it to the linked list at the index
	if (node == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
		{
			return 0;
		}
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
	{
		// If the key already exists, update the value
		node->value = strdup(value);
	}

	// Return 1 to indicate success
	return 1;
}
