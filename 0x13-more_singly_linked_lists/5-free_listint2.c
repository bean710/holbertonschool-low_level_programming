#include "lists.h"

/**
 * free_listint2 - Frees a linked list of listint_t's
 * @head: Pointer to a pointer pointing to the first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head || !(*head))
		return;

	for (; *head; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}
}
