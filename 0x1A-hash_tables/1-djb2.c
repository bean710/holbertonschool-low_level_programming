#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using djb2
 * @str: Pointer to the string to be hashed
 *
 * Return: The hash of the input string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
