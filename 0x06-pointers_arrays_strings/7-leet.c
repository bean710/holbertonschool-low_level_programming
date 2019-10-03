#include "holberton.h"

/**
 * leet - replaces certain characters to make 1337sp34k
 * @a: pointer to string to be modified
 *
 * Return: Pointer to the string that was modified
 */
char *leet(char *a)
{
	char sp34kfrom[] = "aeotl";
	char sp34kto[] = "43071";
	char *p = a;
	int i;
	int diff = ('a' - 'A');

	for (; *p; p++)
	{
		for (i = 0; sp34kfrom[i]; i++)
		{
			if (*p == sp34kfrom[i] || *p == sp34kfrom[i] - diff)
				*p = sp34kto[i];
		}
	}
	return (a);
}
