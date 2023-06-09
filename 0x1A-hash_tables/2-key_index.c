#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: The key
 * @size: The size of the arra of the hash table
 *
 * Return: the index of the key.
 *
 * Description: use djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	unsigned long int index = hash % size;

	return (index);
}
