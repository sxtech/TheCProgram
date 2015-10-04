#include <stdio.h>
#define MAXLINE 1000
#define N 8

int entab(char s[], int lim);
//void detab(char s[]);
//int getline(char line[], int maxline);

main()
{
	int len;
	char line[MAXLINE];
	//max = 80;
	while ((len = entab(line, MAXLINE)) > 0) {
		//printf("%s", line);
		//detab(line);
		//printf("test");
		printf("%s\n", line);
	}
}

int entab(char s[], int lim)
{
	int c, i, j, k;
	int w;  //µ¥´Ê
	int b;  //¿Õ¸ñ 
	int state;
	w = 0;
	i = 0;
	state = 0;
	//for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
	while (i<lim-1 && (c=getchar()) != EOF && c != '\n') {
		if (c == ' ') {
			++b;
			state = 0;
		} else {
			if (state == 0) {
				int n_t;
				n_t = (w+b)/N;
				if (n_t == 0) {
					for (j = 0; j < b; ++j) {
						s[i] = ' ';
						++i;
					}
				} else {
					for (j = 0; j < n_t; ++j) {
						
					}
				}
				for (j = 0; j < (w+b)/N; ++j) {
					s[i] = '\t';
					++i;
					printf("t\n");
				}
				for (k = 0; k < (w+b)%N; ++k) {
					s[i] = ' ';
					++i;
					printf("b\n");
				}
				w = 0;
				b = 0;
			} 
			s[i] = c;
			++i;
			++w;
			state = 1;
			//printf("%c", c);
		}
		//printf("%c", c);
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

