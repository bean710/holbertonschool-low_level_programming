#include "lists.h"

/**
 * delete_nodeint_at_index - Deleted node at certain index in a linked list
 * @head: Pointer to a pointer pointing to the first node in the list
 * @index: The index of the node to be freed
 *
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int on_index;
	listint_t *node, *tmp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}

	for (node = *head, on_index = 0; node; node = node->next, on_index++)
	{
		if (on_index == index - 1)
		{
			if (node->next && node->next->next)
				tmp = node->next->next;
			else
				tmp = NULL;

			free(node->next);

			node->next = tmp;

			return (1);
		}
	}

	return (-1);
}
