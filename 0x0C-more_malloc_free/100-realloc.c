#include "holberton.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (ptr == NULL)
		return(malloc(new_size));

	if (new_size == old_size)
		return(ptr);

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((unsigned char *)new + i) = *((unsigned char *)ptr + i);

	return (new);
}
