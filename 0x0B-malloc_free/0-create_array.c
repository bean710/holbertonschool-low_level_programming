#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
