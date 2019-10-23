#ifndef _CALC_
#define _CALC_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

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

#endif
