#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints a linked list containing integers
 * @h: Address of the first item in the list
 *
 * Return: Length of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	for (len = 0; h; h = h->next, len++)
		printf("%d\n", h->n);

	return (len);
}
