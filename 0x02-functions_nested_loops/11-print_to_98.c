#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from starting number to 98
 * @i: number to count from
 *
 * Return: void
 */
void print_to_98(int i)
{
	int j;

	if (i >= 98)
	{
		for (j = i; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d", j);
		}
	}
	else if (i <= 98)
	{
		for (j = i; j <= 98; j++)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d", j);
		}
	}
	printf("\n");
}
