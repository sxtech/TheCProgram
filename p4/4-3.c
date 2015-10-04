/*

4.3 �ڼ������м���ȡģ%���ܣ�ע�⿼�Ǹ��������
*/

#include <stdio.h>
#include <stdlib.h> //for atof����
#include <math.h>


#define  MAXOP 100
#define  NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while((type = getop(s))!='EOF')
	{
		switch (type)
		{

			//������ѹ��ջ
		case NUMBER:
			push(atof(s));
			break;
			//�ǲ�������ȡ��������Ҫ��Ŀ����������󽫽��ѹ��ջ
		case '+':
			push(pop()+pop());
			break;
		case '-':
			op2 = pop();
			push(pop()-op2);
			break;
		case '*':
			push(pop()*pop());
			break;
		case '/':
			op2 = pop();
			if (op2!=0.0)
				push(pop()/op2);
			else
				printf("error:zero divisor.\n");
			break;
		case '%':
			op2 = pop();
			if (op2!=0.0)
				push(fmod(pop(),op2));
				//push(1 % 4);
			else
				printf("error:zero divisor.\n");
		case '\n':
			printf("��������%.8g\n",pop());
			break;
		default:
			printf("error:unknown command.\n");
			break;			
		}

	}
	return 0;
}

#define  MAXVAL 100
int sp = 0;
double val[MAXVAL];

//push���� ��ֵѹ���ջ
void push(double f)
{
	if (sp<MAXVAL)
	{
		val[sp++] = f;
	}
	else
		printf("error: stack full, can't push %g\n",f);

}

//pop���� �Ӷ�ջ�е���ֵ
double pop(void)
{
	if (sp>0)
	{
		return val[--sp];
	}
	else
	{
		printf("error: stack empty\n");
		return 0.0;
	}
}

#include <ctype.h>
int getch(void);
void ungetch(int);

//getop����ȡ��һ���������������

int getop(char s[])
{
	int i,c;

	//�����ո���Ʊ���
	while((s[0] = c =getch()) == ' '||c == '\t')
		;
	s[1]='\0';
	//�������֣�����
	if (!(isdigit(c)) && c!='.' && c!='-')
		return c;
	i = 0;
	if (c == '-')
	{
		if (isdigit(c = getch())||c == '.')
		{
			s[++i] = c;
		}
		else
		{
			if (c!=EOF)
				ungetch(c);
			return '-';
		}


	}
	//�ռ���������
	if(isdigit(c))
		while(isdigit(s[++i]= c= getch()))
			;
	//�ռ�С������
	if(c == '.')
		while(isdigit(s[++i]= c= getch()))
			;

	s[i] = '\0';
	if (c!=EOF)
	{
		ungetch(c);
	}
	return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

//��������Ϊ����getch�ӻ����������ַ���������getchar����ֱ�Ӵ������ȡ
int getch(void)
{
	return(bufp>0)?buf[--bufp]:getchar();
}

//��Ҫѹ�ص��ַ��ŵ�������
void ungetch(int c)
{
	if (bufp>=BUFSIZE)
	{
		printf("ungetch:too many characters\n");
	}
	else
		buf[bufp++] = c;
}