#include "holberton.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int len, i;
	char *dest;

	for (len = 0; str[len]; len++)
		;
	len++;

	dest = malloc(sizeof(char) * len);

	if (dest == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i] = '\0';

	return (dest);
}
