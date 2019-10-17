#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: Number of bytes of memory to be allocated
 *
 * Description: Allocates `b` bytes of memory, but will exit with status `98`
 *              if there is an error
 *
 * Return: Pointer to the first address in the newly allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ret = malloc(b);

	if (ret == NULL)
		exit(98);

	return (ret);
}
