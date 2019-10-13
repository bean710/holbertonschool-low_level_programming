#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * main - Prints the number of arguments, not including command name
 * @argc: number of arguments including command name
 * @argv: Pointer to array of pointers to arguments as strings including
 *			command name
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (1);
}
