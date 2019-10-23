#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Gets the proper math function based on the given operator
 * @s: Pointer to the character operator
 *
 * Return: Pointer to the proper math function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(98);
}
