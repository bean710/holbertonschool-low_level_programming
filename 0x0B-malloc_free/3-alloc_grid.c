#include "holberton.h"
#include <stdlib.h>

/**
 * freemem - frees the memory of an array of pointers pointing to arrays
 * @d: pointer to first pointer in array
 */
void freemem(int **d)
{
	int i;

	for (i = 0; d[i] != NULL; i++)
	{
		free(d[i]);
	}
	free(d);
}

/**
 * alloc_grid - allocates space for `height` number of int arrays length
 *				`width` filled with zeros
 * @width: the length of each array
 * @height: the number of arrays
 *
 * Return: Pointer to first element in array of pointers, each pointing to
 *			first item in array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **dest;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	dest = malloc(sizeof(int *) * height);

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dest[i] = malloc(sizeof(int) * width);
		if (dest[i] == NULL)
		{
			freemem(dest);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			dest[i][j] = 0;
	}

	return (dest);
}
