#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table in order of hash
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	char first = 1;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; ++i)
	{
		for (tmp = ht->array[i]; tmp; tmp = tmp->next)
		{
			if (first)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
		}
	}

	printf("}\n");
}
