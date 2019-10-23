#include <stdlib.h>
#include <stdio.h>

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

int main(int argc, char **argv)
{
	char *src = "554889e54883ec20897dec488975e048c745f8f807400837dec027414\
bf99094000e819feffffbf01000000e84ffeffff488b45e04883c0084\
88b004889c7e839ffffff8945f4c745f000000000eb4e837df000740a\
bf20000000e8d0fdffff8b45f04898488d5001488b45f84801d00fb60\
00fbed08b45f04863c8488b45f84801c80fb6000fbec089c6bf9f0940\
00b800000000e8b6fdffff8345f0028b45f04863d0488b45f84801d00\
fb60084c074118b45f089c2c1ea1f01d0d1f83b45f47c8dbf0a000000\
863fdffffb800000000c9c3662e0f1f8400000000006690\0";
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = _atoi(argv[1]);

	for (i = 0; src[i] && i / 2 < n; i += 2)
	{
		if (i != 0)
			printf(" ");
		printf("%c%c", src[i], src[i + 1]);
	}
	printf("\n");

	return (0);
}
