#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * rev_string - Reverses a string in place
 * @s: pointer to the first character in the string
 */
void rev_string(char *s)
{
	int len, i;
	char *str;

	for (len = 0; *s; s++)
		len++;

	str = malloc(sizeof(char) * len);
	s--;

	for (i = 0; i < len; i++)
		str[i] = *(s--);
	s++;

	str[i] = '\0';

	printf("%s\n", str);


	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[i] = '\0';
}
