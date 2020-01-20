#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Gets a value given a key from a hash table
 * @ht: Pointer to the hash table
 * @key: Pointer to the string key
 *
 * Return: The value found for the key, or NULL if no value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp;

	if (!key || !*key || !ht)
		return (NULL);

	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}

	return (NULL);
}
