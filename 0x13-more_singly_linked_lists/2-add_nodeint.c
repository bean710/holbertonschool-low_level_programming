#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a linked lis
 * @head: Pointer to a pointer pointing to the first item in the linked list
 * @n: The integer to assign to the node
 *
 * Return: Address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;

	*head = newnode;

	return (newnode);
}
