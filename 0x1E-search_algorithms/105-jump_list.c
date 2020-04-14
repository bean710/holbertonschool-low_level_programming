#include "search_algos.h"
#include <math.h>

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jsize = sqrt(size), i, index = 0, pindex;
	listint_t *n = list, *prev;

	if (!list)
		return (NULL);

	while (n->n < value && n->next)
	{
		printf("Value checked at index [%d] = [%d]\n", index, n->n);
		prev = n;
		pindex = index;
		for (i = 0; n->next && i < jsize; i++, index++)
			n = n->next;
	}

	printf("Value found between index [%d] and [%d]\n", pindex, index);

	for (; prev && pindex <= index; prev = prev->next, pindex++)
	{
		printf("Value checked at index [%d] = [%d]\n", pindex, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
