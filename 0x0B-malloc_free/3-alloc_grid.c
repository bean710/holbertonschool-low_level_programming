#include "holberton.h"
#include <stdlib.h>

void freemem(int **d)
{
	int i;

	for (i = 0; d[i] != NULL; i++)
	{
		free(d[i]);
	}
	free(d);
}

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
