#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *node;
	unsigned int on_index;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	for (on_index = 0, node = *h; node != NULL; ++on_index, node = node->next)
	{
		if (on_index == idx)
		{
			newnode->next = node;
			newnode->prev = node->prev;
			if (node->prev != NULL)
				node->prev->next = newnode;
			node->prev = newnode;

			if (idx == 0)
				*h = newnode;
			return (newnode);
		}
	}

	if (on_index == idx)
		return (add_dnodeint_end(h, n));

	free(newnode);
	return (NULL);
}
