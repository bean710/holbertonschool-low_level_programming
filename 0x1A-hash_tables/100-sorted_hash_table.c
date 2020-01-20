#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - Creates a hash table with doubly-linked elements
 * @size: The size of the hash table
 *
 * Return: Pointer to the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (!table)
		return (NULL);

	table->size = size;

	table->array = calloc(size, sizeof(shash_table_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - Sets a key of the hash table to a certain value
 * @ht: Pointer to the hash table
 * @key: The key to set the value of
 * @value: The value to set at key
 *
 * Return: 1 on success, 0 on fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node;
	char *nval;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	nval = strdup(value);
	if (!nval)
		return (0);

	if (ht->array[index] != NULL)
	{
		for (node = ht->array[index]; node; node = node->next)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = nval;
				return (insert_sorted(ht, node, key));
			}
		}
	}
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}

	node->value = nval;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (insert_sorted(ht, node, key));
}

/**
 * insert_sorted - Inserts a new table entry into the doubly-linked list
 * @ht: Pointer to the hash table
 * @node: The node to insert into the DLL
 * @key: The key to use for position in the DLL
 *
 * Return: 1 for success
 */
int insert_sorted(shash_table_t *ht, shash_node_t *node, const char *key)
{
	shash_node_t *tmp, *prev;

	if (ht->shead == NULL)
	{
		node->snext = NULL;
		node->sprev = NULL;
		ht->shead = node;
		ht->stail = node;
		return (1);
	}

	for (tmp = ht->shead; tmp; prev = tmp, tmp = tmp->snext)
	{
		if (strcmp(key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			if (tmp->sprev == NULL)
				ht->shead = node;
			else
				tmp->sprev->snext = node;
			tmp->sprev = node;
			return (1);
		}
	}

	node->snext = NULL;
	node->sprev = prev;
	prev->snext = node;
	ht->stail = node;
	return (1);

}

/**
 * shash_table_get - Gets the value for a given key
 * @ht: Pointer to the hash table
 * @key: The key to get the value of
 *
 * Return: The value found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (!key || !*key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the hash table using the DLL
 * @ht: Pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char first = 1;

	if (!ht)
		return;

	printf("{");

	for (tmp = ht->shead; tmp; tmp = tmp->snext)
	{
		if (first)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			first = 0;
		}
		else
			printf(", '%s': '%s'", tmp->key, tmp->value);
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table using the DLL, backwards
 * @ht: Pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char first = 1;

	if (!ht)
		return;

	printf("{");

	for (tmp = ht->stail; tmp; tmp = tmp->sprev)
	{
		if (first)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			first = 0;
		}
		else
			printf(", '%s': '%s'", tmp->key, tmp->value);
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes all elements of the hash table
 * @ht: Pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;

	for (tmp = ht->shead; tmp->snext;)
	{
		free(tmp->key);
		free(tmp->value);
		tmp = tmp->snext;
		free(tmp->sprev);
	}
	free(tmp->key);
	free(tmp->value);
	free(tmp);

	free(ht->array);
	free(ht);
}
