#include "holberton.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int diff, i;
	int *arr;

	if (min > max)
		return (NULL);

	diff = max - min;

	arr = malloc(sizeof(int) * (diff + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < diff + 1; i++)
	{
		arr[i] = (min + i);
	}

	return (arr);
}
