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

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	func_to_use = get_op_func(argv[2]);
	if (func_to_use == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = func_to_use(a, b);

	printf("%d\n", res);

	return (0);
}
