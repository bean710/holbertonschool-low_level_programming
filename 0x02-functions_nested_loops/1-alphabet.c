#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void
 */
void print_alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
