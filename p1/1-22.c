#include <stdio.h>
#define N 20

main()
{	
	int c, nl;
	char line[N+1];
	int l_flag;
	int i, j;
	i = 0;
	while ((c=getchar()) != EOF) {
		//printf("%c", c);
		line[i] = c;
		if (c != ' ') {
			l_flag = i;
		}
		++i;
		if (i >= N) {
			if (c != ' ') {
				printf("%s\n", line);
			} else {
				for (j = 0; j < i; ++j)
					printf("%c",line[j]);
				printf("\n");
			}
			i = 0;
			//line[N] = {'\0'};
		}
		if (c == '\n') {
			for (j = 0; j < i; ++j)
				printf("%c", line[j]);
				printf("\n");
		}
	}
}