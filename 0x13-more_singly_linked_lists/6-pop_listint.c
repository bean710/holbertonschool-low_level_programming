#include "lists.h"

/**
 * pop_listint - Frees the head node, making the second node the new head
 * @head: Pointer to a pointer which points to the first node in the list
 *
 * Return: The value of the old head
 */
int pop_listint(listint_t **head)
{
	listint_t *oldhead;
	int ret;

	if (!*head)
		return (0);

	oldhead = *head;

	*head = oldhead->next;

	ret = oldhead->n;
	free(oldhead);

	return (ret);
}
