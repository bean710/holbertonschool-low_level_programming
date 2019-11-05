#include "lists.h"
#include <stdio.h>

size_t free_listint_safe(listint_t **h)
{
	listint_t *node = *h, *next;
	size_t len = 0;

	if (!h || !*h)
		return (0);

	while (node)
	{
		next = node->next;

		free(node);
		len++;

		if ((void *)node < (void *)next)
		{
			*h = NULL;
			break;
		}

		node = next;
	}

	*h = NULL;

	return (len);
}
