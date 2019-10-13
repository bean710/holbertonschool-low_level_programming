#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints minimum number of coins needed to get cents
 * @argc: number of arguments including command name
 * @argv: Pointer to array of pointers to arguments as strings including
 *			command name
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char **argv)
{
	int input, coinnum = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	input = _atoi(argv[1]);

	if (input < 0)
	{
		puts("Error");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		while (input - coins[i] >= 0)
		{
			coinnum++;
			input -= coins[i];
		}
	}

	printf("%d\n", coinnum);

	return (1);
}

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to the first character of the string
 *
 * Return: Value of integer in string
 */
int _atoi(char *s)
{
	unsigned int num;
	int neg;

	neg = 1;
	num = 0;

	for (; *s; s++)
	{
		if (*s >= '0' && *s <= '9')
		{
			num *= 10;
			num += *s - '0';
		}
		else if (num > 0)
		{
			break;
		}
		else if (*s == '-')
		{
			neg = -neg;
		}
	}

	return (num * neg);
}

