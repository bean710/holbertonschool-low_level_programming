#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char f1(char a)
{
	return (a ^ 0x3b) & 0x3f;
}

char f2(char *a, int b)
{
	char c = 0;
	int d = 0;

	while (d < b)
	{
		c += a[d];
		++d;
	}

	return ((c ^ 0x4f) & 0x3f);
}

char f3(char *user, int len)
{
	char i = 1;

	int j = 0;
	while (j < len)
	{
		i *= user[j];
		++j;
	}

	return ((i ^ 0x55) & 0x3f);
}

char f4(char *user, int len)
{
	unsigned int i = 0;
	char c = user[0];

	while (i < len)
	{
		if (user[i] > c)
			c = user[i];

		++i;
	}
	srand(c ^ 0xe);
	return (rand() & 0x3f);
}

char f5(char *user, int len)
{
	char c = 0;
	int i = 0;

	while (i < len)
	{
		c += user[i] * user[i];
		++i;
	}

	return ((c ^ 0xef) & 0x3f);
}

char f6(char *user, int len)
{
	char c = 0;
	int i = 0;

	while (i < len)
	{
		c = rand();
		++i;
	}

	return ((c ^ 0xe5) & 0x3f);
}

int main(int argc, char **argv)
{
	/**
	char map[] = "A-CHRDw8", 
		 m2[] = "7lNS0E9B",
		 m3[] = "2TibgpnM",
		 m4[] = "Vys5Xzvt",
		 m5[] = "OGJcYLU+",
		 m6[] = "4mjW6fxq",
		 m7[] = "ZeF3Qa1r",
		 m8[] = "PhdKIouk";
	**/
	char map[] = "A-CHRDw8\
				  7lNS0E9B\
				  2TibgpnM\
				  Vys5Xzvt\
				  OGJcYLU+\
				  4mjW6fxq\
				  ZeF3Qa1r\
				  PhdKIouk";

	/**
	long int offset;
	long int local_10 = *(long int *)(&offset + 0x28);
  	long int map = 0x3877445248432d41;
  	long int local_50 = 0x42394530534e6c37;
  	long int local_48 = 0x4d6e706762695432;
  	long int local_40 = 0x74767a5835737956;
  	long int local_38 = 0x2b554c59634a474f;
  	long int local_30 = 0x71786636576a6d34;
  	long int local_28 = 0x723161513346655a;
  	long int local_20 = 0x6b756f494b646850;
	long int local_18 = 0x0;

	long int map1[] = {
		0x412d434852447738,
		0x376c4e5330453942,
		0x3254696267706e4d,
		0x56797335587a7674,
		0x4f474a63594c552b,
		0x346d6a5736667871,
		0x5a65463351613172,
		0x5068644b496f756b,
		0
	};
	**/

	/**
	const unsigned long int map = 0x3877445248432d41;
	const unsigned long int ma2 = 0x42394530534e6c37;
	const unsigned long int ma3 = 0x4d6e706762695432; 
	const unsigned long int ma4 = 0x74767a5835737956;
	const unsigned long int ma5 = 0x2b554c59634a474f;
	const unsigned long int ma6 = 0x71786636576a6d34;
	const unsigned long int ma7 = 0x723161513346655a;
	const unsigned long int ma8 = 0x6b756f494b646850;
	**/

	char *user = argv[1]; //var_60

	long unsigned int ulen = strlen(user); //var_68

	char key[7];
	key[6] = '\0';

	char c1 = *(char *)(map + f1(ulen));
	char c2 = *(char *)(map + f2(user, ulen));
	char c3 = *(char *)(map + f3(user, ulen));
	char c4 = *(char *)(map + f4(user, ulen));
	char c5 = *(char *)(map + f5(user, ulen));
	char c6 = *(char *)(map + f6(user, ulen));

	key[0] = c1;
	key[1] = c2;
	key[2] = c3;
	key[3] = c4;
	key[4] = c5;
	key[5] = c6;

	printf("Key: %s\n", key);

	exit(0);
}
