#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the linked list
 * @head: Pointer to a pointer which points to the first node in the list
 * @n: The integer to be assigned to the new node
 *
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!(*head))
	{
		*head = newnode;
		return (newnode);
	}

	ptr = *head;

	for (; ptr->next; ptr = ptr->next)
		;

	ptr->next = newnode;

	return (newnode);
}
