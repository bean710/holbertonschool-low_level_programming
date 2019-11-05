#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of listint_t's
 * @head: Pointer to a pointer pointing to the first node in the list
 *
 * Return: The size of the free'd list
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *next;
	size_t len = 0;

	if (!head || !(*head))
		return (0);

	for (; *head; *head = next, len++)
	{
		next = (*head)->next;
		if ((void *)next > (void *)*head)
		{
			free(*head);
			*head = NULL;
			return (len + 1);
		}

		free(*head);
	}

	return (len);
}
