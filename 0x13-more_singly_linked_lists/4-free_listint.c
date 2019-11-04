#include "lists.h"

/**
 * free_listint - Frees a linked list of listint_t's
 * @head: Pointer to the first node in the list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	if (!head)
		return;

	for (; head; head = next)
	{
		next = head->next;
		free(head);
	}
}
