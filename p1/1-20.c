#include <stdio.h>
#define MAXLINE 1000
#define N 8

int detab(char s[], int lim);
//void detab(char s[]);
//int getline(char line[], int maxline);

main()
{
	int len;
	char line[MAXLINE];
	//max = 80;
	while ((len = detab(line, MAXLINE)) > 0) {
		//printf("%s", line);
		//detab(line);
		//printf("test");
		printf("%s\n", line);
	}
}

int detab(char s[], int lim)
{
	int c, i;
	int w;
	w = 0;
	i = 0;
	//for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
	while (i<lim-1 && (c=getchar()) != EOF && c != '\n') {
		if (c == '\t') {
			int b, j;
			b = N - w%N;
			for (j = 0; j < b; ++j) {
				s[i] = ' ';
				++i;
				//printf("%c", s[i]);
			}
			w = 0;
		} else {
			s[i] = c;
			++i;
			//printf("%c", c);
		}
		++w;
		//printf("%c", c);
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

