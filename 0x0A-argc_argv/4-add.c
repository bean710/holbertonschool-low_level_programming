#include <stdio.h>

/**
 * tonum - Converts string to positive number
 * @c: pointer to first character in string
 *
 * Return: Integer value of string
 */
int tonum(char *c)
{
	int num = 0;

	for (; *c; c++)
	{
		if (*c >= '0' && *c <= '9')
		{
			num *= 10;
			num += (*c - '0');
		}
		else
		{
			return (-1);
		}
	}

	return (num);
}

/**
 * main - Prints the sum of all arguments
 * @argc: number of arguments including command name
 * @argv: Pointer to array of pointers to arguments as strings including
 *			command name
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int res;

	for (argv++, argc--; argc--; argv++)
	{
		res = tonum(*argv);
		if (res < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += res;
	}

	printf("%d\n", sum);

	return (0);
}
