#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to beginning of string
 * @accept: list of acceptable characters for the prefix
 *
 * Return: Length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int i, j;

	count = 0;
	for (i = 0; *s; s++, i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				count++;
				break;
			}
		}

		if (count <= i)
			break;
	}

	return (count);
}
