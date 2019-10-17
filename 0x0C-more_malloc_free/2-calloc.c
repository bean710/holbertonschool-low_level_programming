#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory and fills it with zero
 * @nmemb: Size in bytes of each element
 * @size: number of elements to allocate room for
 *
 * Return: Void pointer to the first adress in the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *newmem;
	unsigned long int i;
	unsigned long int bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = nmemb * size;
	newmem = malloc(bytes);

	if (newmem == NULL)
		return (NULL);

	for (i = 0; i < bytes; i++)
		*((unsigned char *)newmem + i) = 0;

	return (newmem);
}
