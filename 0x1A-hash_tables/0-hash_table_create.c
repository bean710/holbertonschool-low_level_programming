#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table using node structs
 * @size: The requested size of the table
 *
 * Return: Pointer to the first position of the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
