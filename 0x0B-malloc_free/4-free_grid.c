#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated by an array of pointers to arrays
 * @grid: Pointer to the first item in array of pointers to int arrays
 * @height: Number of pointers in array of pointers
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}
	free(grid);
}
