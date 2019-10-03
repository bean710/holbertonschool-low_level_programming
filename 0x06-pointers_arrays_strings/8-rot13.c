#include "holberton.h"

/**
 * rot13 - encodes the string using rot13
 * @a: pointer to string to be modified
 *
 * Return: Pointer to the string that was modified
 */
char *rot13(char *a)
{
	char normal[] =	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] =  "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = a;
	int i;

	for (; *p; p++)
	{
		for (i = 0; normal[i]; i++)
		{
			if (*p == normal[i])
			{
				*p = rot13[i];
				break;
			}
		}
	}
	return (a);
}
