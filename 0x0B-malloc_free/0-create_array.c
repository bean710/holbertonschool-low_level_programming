#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates an array of size `size` filled with character `c`
 * @size: Size of array to be created
 * @c: Character to fill the array with
 *
 * Return: Pointer to the first character in the created array or NULL if any
 *			errors occurred
 */
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
