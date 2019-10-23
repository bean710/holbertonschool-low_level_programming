#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints result of math with certain operators
 * @argc: Number of arguments passed to the program
 * @argv: Pointer to the first pointer in an array of pointers which each
 * point to the first character in the string version of each argument passed
 * to the program
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int a, b;
	int res;
	int (*func_to_use)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[3]);

	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(98);
	}

	func_to_use = get_op_func(argv[2]);
	if (func_to_use == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	res = func_to_use(a, b);

	printf("%d\n", res);

	return (0);
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
