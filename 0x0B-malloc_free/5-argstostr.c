#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Concatonates an array of strings
 * @ac: Number of strings to be concatonated
 * @av: Pointer to array of pointers to strings
 *
 * Return: Pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *dest;
	int i, j;
	unsigned int len, count;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, len++)
			;
	}

	dest = malloc(sizeof(char) * len + ac + 1);

	if (dest == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			dest[count] = av[i][j];
			count++;
		}
		dest[count] = '\n';
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
