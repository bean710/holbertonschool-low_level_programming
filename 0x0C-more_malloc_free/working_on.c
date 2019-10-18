#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char *n1, *n2;
	char *count;
	char *prod;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	n1 = argv[1];
	n2 = argv[2];

	count = malloc(sizeof(char) * (_strlen(n2) + 1));
	if (count == NULL)
	{
		_puts("Error");
		exit(98);
	}
	count = _strcpy(count, n2);

	prod = malloc(sizeof(char) * 2);
	prod[0] = '0';
	prod[1] = '\0';
	while (notzero(count))
	{
		printf("Adding %s to %s\n", prod, n1);
		prod = _addstr(prod, n1);
		_dec(count);
		printf("Left: %s\n", count);
	}

	puts(prod);

/*	free(prod);
	free(count);
*/
	return (1);
}

char *clean(char *c)
{
	unsigned int len = _strlen(c);
	char *ret;
	unsigned int i;

	if (c[0] == '0')
		ret = malloc(sizeof(char) * len);
	else
		return (c);

	for (i = 0; i < len; i++)
		ret[i] = c[i + 1];

	printf("Returning: %s\n", ret);
	return (ret);
}

void _dec(char *c)
{
	for (; *c; c++)
		;
	c--;

	while (*c == '0')
		c--;

	*c -= 1;
	c++;

	for (; *c; c++)
		*c = '9';
}

int notzero(char *c)
{
	for (; *c; c++)
	{
		if (*c != '0')
			return (1);
	}
	return (0);
}

char *_tosize(char *c, unsigned int size)
{
	char *p = c;

	while (_strlen(p) < size)
		p = _prepend(p, '0');

	return (p);
}

char *_addstr(char *s1, char *s2)
{
	char *sum;
	char *o1; /* = s1; *, *o2 = s2;*/
	unsigned int temp;
	unsigned int len1, len2;
	
	sum = malloc(sizeof(char) * 2);
	if (sum == NULL)
		return (NULL);
	sum[0] = '0';
	sum[1] = '\0';

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	printf("Old add: %s and %s\nSize %d vs %d\n", s1, s2, len1, len2);

	if (len1 > len2)
		s2 = _tosize(s2, len1);
	else
		s1 = _tosize(s1, len2);

	o1 = s1;

	printf("New add: %s and %s\n", s1, s2);
	for (; *s1; s1++)
		;
	s1--;

	for (; *s2; s2++)
		;
	s2--;
	printf("Comp: %p to %p\n", s1, o1);

	for (; s1 >= o1; s1--, s2--)
	{
		temp = *s1 - '0' + *s2 - '0';
		printf("Adding digit %c to %c\n", *s1, *s2);
		if (temp % 10 + (sum[0] - '0') > 9)
		{
			sum[0] = '0';
			sum = _prepend(sum, '0' + 1);
		}
		else
		{
			sum[0] = sum[0] + (temp % 10);
			sum = _prepend(sum, (temp / 10) + '0');
		}
		if (sum == NULL)
			return (NULL);
	}

	sum = clean(sum);
	return (sum);
}

char *_prepend(char *p, char c)
{
	unsigned int i;
	char *ret;

	ret = malloc(sizeof(char) * (_strlen(p) + 2));

	if (ret == NULL)
		return (NULL);

	ret[0] = c;
	for (i = 1; p[i - 1]; i++)
		ret[i] = p[i - 1];
	ret[i] = '\0';

/*	free(p);
*/
	return (ret);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to first character of string
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; *s != '\0'; s++, i++)
		;

	return (i);
}

/**
 * _puts - Prints a string
 * @str: pointer to string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}

/**
 * _strcpy - copies a string from the source to the buffer
 * @dest: pointer to string destination
 * Return: a pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
