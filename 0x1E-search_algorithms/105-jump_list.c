#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches a linked list using jumping
 * @list: Pointer to the first node
 * @size: Size of the list
 * @value: The value to look for
 *
 * Return: Pointer to the found node, or null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jsize = sqrt(size), i;
	listint_t *n = list, *prev;

	if (!list)
		return (NULL);

	while (n->n < value && n->next)
	{
		prev = n;
		for (i = 0; n->next && i < jsize; i++)
			n = n->next;
		printf("Value checked at index [%d] = [%d]\n", (int)n->index, n->n);
	}

	printf("Value found between index [%d] and [%d]\n", (int)prev->index,
			(int)n->index);

	for (; prev; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
