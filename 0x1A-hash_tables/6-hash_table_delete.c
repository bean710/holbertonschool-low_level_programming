#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a given hash table
 * @ht: Pointer to the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *nxt;

	if (!ht)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		for (tmp = ht->array[i]; tmp; tmp = nxt)
		{
			nxt = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
