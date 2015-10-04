#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[]);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	//max = 80;
	while ((len = getline(line, MAXLINE)) > 0) {
		//printf("%s", line);
		
		reverse(line);
		//printf("test");
		printf("%s\n", line);
	}
	return 0;
} 

int getline(char s[], int lim)
{
	int c, i;
	
	for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char s[])
{
	int i, len, l;
	char t;
	len = strlen(s)-1;
	l = len/2;

	for (i = 0; i < l; ++i) {
		t = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = t;
	}
	s[len] = '\0';
}

void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}