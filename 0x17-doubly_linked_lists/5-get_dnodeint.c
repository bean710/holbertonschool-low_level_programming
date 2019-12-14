#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int on_index;

	for (on_index = 0; head != NULL; ++on_index, head = head->next)
	{
		if (on_index == index)
			return (head);
	}

	return (NULL);
}
