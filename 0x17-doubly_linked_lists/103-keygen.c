#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int f1(unsigned int a)
{
	return (a ^ 0x3b) & 0x3f;
}

int f2(char *a, unsigned int b)
{
	unsigned int c = 0;
	unsigned int i = 0;

	while (i < b)
	{
		c += a[i];
		++i;
	}

	return ((char)((c ^ 0x4f) & 0x3f));
}

int f3(char *user, unsigned int len)
{
	unsigned int c = 1;

	unsigned int i = 0;
	while (i < len)
	{
		c *= user[i];
		++i;
	}

	return (char)((c ^ 0x55) & 0x3f);
}

int f4(char *user, int len)
{
	int i = 0;
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

int f5(char *user, int len)
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

int f6(unsigned int len)
{
	unsigned int c = 0;
	unsigned int i = 0;

	while (i < len)
	{
		c = rand();
		++i;
	}

	return (char)((c ^ 0xe5) & 0x3f);
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
	char map[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

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

	char *user = argv[1];

	long unsigned int ulen = strlen(user);

	char key[7];

	/**
	char c1 = *(char *)(map + f1(ulen));
	char c2 = *(char *)(map + f2(user, ulen));
	char c3 = *(char *)(map + f3(user, ulen));
	char c4 = *(char *)(map + f4(user, ulen));
	char c5 = *(char *)(map + f5(user, ulen));
	char c6 = *(char *)(map + f6(ulen));
	**/

	int c1 = f1(ulen);
	int c2 = f2(user, ulen);
	int c3 = f3(user, ulen);
	int c4 = f4(user, ulen);
	int c5 = f5(user, ulen);
	int c6 = f6(user[0]);

	key[0] = map[c1];
	key[1] = map[c2];
	key[2] = map[c3];
	key[3] = map[c4];
	key[4] = map[c5];
	key[5] = map[c6];
	key[6] = '\0';

	printf("%s", key);

	(void)(argc);
	exit(0);
}
