#include "holberton.h"

/**
 * get_endianness - Gets the method of bit storage of the computer
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;

	return (*c ? 1 : 0);
}
