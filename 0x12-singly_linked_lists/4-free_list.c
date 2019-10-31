#include "lists.h"
#include <stddef.h>

void free_list(list_t *head)
{
	list_t *tmp;

	for (; head != NULL; head = tmp)
	{
		free(head->str);
		tmp = head->next;
		free(head);
	}
}
