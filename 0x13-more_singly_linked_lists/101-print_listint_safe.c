#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list containing integers
 * @h: Address of the first item in the list
 *
 * Return: Length of the linked list
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t len;

	for (len = 0; h; h = h->next, len++)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		if ((void *)h->next > (void *)h)
		{
			printf("-> [%p] %d\n", (void *)h->next, h->next->n);
			return (len + 1);
		}
	}

	return (len);
}
