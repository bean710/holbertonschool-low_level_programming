#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints the contents of a linked list
 * @h: Pointer to the first item in the linked list
 *
 * Return: size_t of the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *item = h;

	for (; item != NULL; item = item->next, len++)
	{
		if (item->str)
			printf("[%d] %s\n", item->len, item->str);
		else
			printf("[0] (nil)\n");
	}

	return (len);
}
