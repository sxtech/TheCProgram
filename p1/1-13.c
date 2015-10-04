#include <stdio.h>

#define IN  1 /*在单词内*/ 
#define OUT 0 

main()
{
	int c, nl, nw, nc, state;
	int i, j;
	state = OUT;
	nl = nw = nc = 0;
	int wl[10] = {0}; //字符数组长度

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
			printf("\n");
		}
		if (state == IN)
			++wl[nw-1];
			//printf(" %d", wl[nw-1]);
			//putchar(c);
	}
	printf("%d %d %d\n", nl, nw, nc);
	
	for (i = 0; i < nw; ++i) {
		for (j = 0; j < wl[i]; ++j) {
			printf("=");
		}
		printf("\n");
	}
	//printf(" %d",wl[i]);
	//printf("Hello World\n");
} 