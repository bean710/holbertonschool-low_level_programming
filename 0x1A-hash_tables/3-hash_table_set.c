#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Sets a value in a given hash table given a key
 * @ht: Pointer to the hash table
 * @key: Pointer to the key
 * @value: Pointer to the value
 *
 * Return: 1 on succes, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *nval;

	if (!key || !*key || !value || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		node = ht->array[index];
		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				nval = strdup(value);
				if (!nval)
					return (0);
				free(node->value);
				node->value = nval;
				return (1);
			}
			node = node->next;
		}
	}

	return (assign(key, value, ht));
}

/**
 * assign - Assigns and mallocs values for the hash item
 * @key: The hash item's key
 * @value: The hash item's value
 * @ht: Pointer to the target hash table
 *
 * Return: 1 for success, otherwie 0
 */
int assign(const char *key, const char *value, hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
