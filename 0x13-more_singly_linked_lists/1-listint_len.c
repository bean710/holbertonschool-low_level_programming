#include "lists.h"

/**
 * listint_len - Returns the length of a linked list
 * @h: Address of the first item in the list
 *
 * Return: The length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h; h = h->next)
		len++;

	return (len);
}
