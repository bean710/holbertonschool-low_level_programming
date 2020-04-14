#include "search_algos.h"

/**
 * linear_skip - Uses a skip list to search linearly faster
 * @list: Pointer to the first node
 * @value: The value to look for
 *
 * Return: Pointer to the node holding that value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *prev = list;

	if (!list)
		return (NULL);

	while (node->express && node->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index,
				(int)node->n);
		prev = node;
		node = node->express;
	}

	printf("Value found between indexes [%d] and [%d]\n",
			(int)prev->index, (int)node->index);

	while (prev != node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index,
				(int)prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
