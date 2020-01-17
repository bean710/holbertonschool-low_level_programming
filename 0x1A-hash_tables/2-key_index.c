#include "hash_tables.h"

/**
 * key_index - Gets the hash table index for a given key
 * @key: The key of the data to be entered
 * @size: The size of the target hash table
 *
 * Return: The index to store the value for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
