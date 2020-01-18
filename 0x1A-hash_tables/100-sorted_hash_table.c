#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

shash_table_t *shash_table_create(unsigned long int size)
{
	table = malloc(sizeof(shash_table_t));
	
	if (!table)
		return (NULL);

	table->size = size;

	table->array = calloc(size, sizeof(shash_table_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	table->snext = NULL;
	table->sprev = NULL;

	return (table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *tmp, *prv;
	char *nval;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index(key, ht->size);

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
			}
		}
	}
	else
	{
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
	}

	if (ht->head == NULL)
	{
		node->snext = NULL;
		node->sprev = NULL;
		ht->head = node;
		ht->tail = node;
		return (1);
	}

	for (tmp = ht->shead; tmp; prev = tmp, tmp = tmp->snext)
	{
		if (strcmp(value, tmp->value) < 0)
		{
			if (tmp->prev == NULL)
				ht->head = node;
			node->next = tmp;
			node->prev = tmp->prev;
			tmp->prev->next = node;
			tmp->prev = node;
			return (1);
		}
	}

	node->snext = NULL;
	node->sprev = tmp;
	tmp->snext = node;
	ht->tail = node;
	return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{

}

void shash_table_print(const shash_table_t *ht)
{

}

void shash_table_print_rev(const shash_table_t *ht)
{

}

void shash_table_delete(shash_table_t *ht)
{

}
