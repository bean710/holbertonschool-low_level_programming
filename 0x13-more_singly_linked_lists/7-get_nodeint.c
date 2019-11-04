#include "lists.h"

/**
 * get_nodeint_at_index - Gets a node at a certain index
 * @head: Pointer to the first node in the list
 * @index: Index of desired node
 *
 * Return: Address of matching node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int on_index;

	if (!head)
		return (NULL);

	for (on_index = 0; head; head = head->next, on_index++)
	{
		if (on_index == index)
			return (head);
	}

	return (NULL);
}
