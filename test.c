#include <stdio.h>
#define INFINITY (1 << 31) 
#define N 8

main()
{
	/* 
	int i;
	char a[127] = {1};
	for (i=0; i<128; ++i)
		printf("%c",i);
		
	char b = 'c';
	int d = a['c'];
	printf("%d", d);
	int j;
	j = 5/2;
	printf("%d", j); */
	//printf("a\tcd\t12345678\thijk\n");
	//printf("123456789\t12\n");
	//printf("123456781234567812345678"); 
	/*
	int i;
	i = 9%8;
	printf("%d\n", i);
	i = 9/8;
	printf("%d\n", i); */
	//char c;
	//c = '7';
	//int i;
	//i = isdigit(c);
	unsigned int i, j;
	unsigned int y = 127;
	int z = 127;

	i = (y << (31-3)) >> (31-3);
	j = (z << (31-3)) >> (31-3);
	
	printf("%d\n", i);
	printf("%d\n", j);
}