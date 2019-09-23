#include "holberton.h"

/**
 * main - Prints "Holberton"
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int i;
	char s[10] = "Holberton\n";

	for (i = 0; i < sizeof(s); i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
