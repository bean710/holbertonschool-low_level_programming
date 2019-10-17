#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - converts a sting to an array of the words in the string
 * @str: Pointer to the first character in the original string
 *
 * Return: A pointer to the first pointer in an array of pointers which each
 *			point to the first character in the string of a word
 */
char **strtow(char *str)
{
	char **dest;
	int wordcount, onword = 0, wordsize;
	int i, j, w;

	if (str == NULL)
		return (NULL);
	if (str[0] == '\0')
		return (NULL);

	wordcount = get_wordcount(str);

	dest = malloc(sizeof(char *) * (wordcount + 1));
	if (dest == NULL)
		return (NULL);
	dest[wordcount] = NULL;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;

		for (j = i; str[j] && str[j] != ' '; j++)
			;

		wordsize = j - i;
		dest[onword] = malloc(sizeof(char) * (wordsize + 1));
		if (dest[onword] == NULL)
		{
			freememc(dest);
			return (NULL);
		}
		for (w = 0; str[i] && str[i] != ' '; i++, w++)
			dest[onword][w] = str[i];
		dest[onword][w] = '\0';

		if (!str[i])
			i--;
		onword++;
	}
	return ((wordcount == 0) ? NULL : dest);
}


/**
 * freememc - frees the memory of an array of pointers pointing to arrays
 * @d: pointer to first pointer in array
 */
void freememc(char **d)
{
	int i;

	for (i = 0; d[i] != NULL; i++)
	{
		free(d[i]);
	}
	free(d);
}

/**
 * get_wordcount - gets the number of words in a string with space separators
 * @c: pointer to the first character in the string
 *
 * Return: Number of words in the string
 */
int get_wordcount(char *c)
{
	int i, count = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] != ' ')
		{
			count++;
			for (; c[i] && c[i] != ' '; i++)
				;
		}
	}

	return (count);
}

