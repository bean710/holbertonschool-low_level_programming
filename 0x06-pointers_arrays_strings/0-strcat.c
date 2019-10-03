#include "holberton.h"

/**
 * _strcat - Concatonates two strings
 * @dest: Pointer to both the first sting and the destination for the
 *	  Concatonated string
 * @src: Pointer to the second string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	for (; *p; p++)
		;
	p--;

	for (; *src; src++, p++)
	 	*p = *src;
	*p = '\0';

	return (dest);
}
