#include <stdio.h>

main()
{
	int c;
	int chara[128] = {0};

	while ((c = getchar()) != EOF) {
		++chara[c];
	}
	int i, j;
	for (i=0; i <128; ++i) {
		if (chara[i] > 0) {
			printf("%c : ", i);
			//printf("%d\n", chara[i]);
			for (j = 0; j < chara[i]; ++j) {
				printf("%c", "=");
			}
			printf("\n");
		}
	}
} 