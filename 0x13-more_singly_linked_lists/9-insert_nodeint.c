#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node into a linked list at a specified
 * index
 * @head: Pointer to a pointer pointing to the first node in the list
 * @idx: The index to insert the new node at
 * @n: The value the new node should hold
 *
 * Return: The address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int on_index;
	listint_t *node;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		if (idx == 0)
		{
			newnode->next = NULL;
			*head = newnode;
			return (newnode);
		}
		free(newnode);

		return (NULL);
	}

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (node = *head, on_index = 0; node; node = node->next, on_index++)
	{
		if (on_index == idx - 1)
		{
			newnode->next = node->next;
			node->next = newnode;
			return (newnode);
		}
	}
	return (NULL);
}
