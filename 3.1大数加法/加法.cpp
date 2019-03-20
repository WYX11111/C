#include <stdio.h>
#include <conio.h>
#include <string.h>

#define N 20

void GetNumberStr(char s[]);
void AddNumberStr(char s[], char b[], char c[]);
char AddChar(char ch1, char ch2);
void LeftTrim(char str[]);

int tag = 0;

void main()
{
	char a[N+1] = {0}, b[N+1] = {0}, c[N+2];

	printf("a=");
	while(strlen (a) == 0)
		GetNumberStr (a);

	printf("\nb=");
	while(strlen (b) == 0)
		GetNumberStr (b);
	
	AddNumberStr(a, b, c);
	printf("\na+b=%s \n", c);
}

void GetNumberStr(char s[])
{
	int i = 0;
	char ch;

	while(1)
	{
		ch = getch();
		if(ch == '\r')
			break;
		if(ch == '\b')
		{
			if(i > 0)
			{
				printf("%c %c", ch, ch);
				i--;
			}
			else
				printf("\07");   //°Æ07°Ø «œÏ¡Â±®æØ
			continue;
		}

		if(ch < '0' || ch > '9')
		{
			printf("\07");
			continue;
		}

		if(i < N)
		{
			printf("%c" ,ch);
			s[i++] = ch;
		}
		else
			printf("\07");
	}
	s[i] = '\0';
}

void AddNumberStr(char a[], char b[], char c[])
{
	int i, j, k;

	memset(c, ' ', N+2);
	i = strlen(a) - 1;
	j = strlen(b) - 1;

	k = N;

	while (i >= 0 && j >= 0)
		c[k--] = AddChar (a[i--], b[j--]);
	while (i >= 0)
		c[k--] = AddChar (a[i--], '0');
	while (j >= 0)
		c[k--] = AddChar (b[j--], '0');

	if(tag == 1)
		c[k] = '1';
	c[N+1] = '\0';
	LeftTrim (c);
}

char AddChar(char ch1, char ch2)
{
	char ch;

	ch = (ch1 - '0' + ch2 - '0') + tag;
	if (ch >= 10)
	{
		tag = 1;
		return (ch - 10 + '0');
	}
	else
	{
		tag = 0;
		return (ch + '0');
	}
}

void LeftTrim(char str[])
{
	int i;

	for(i = 0; str[i] == ' '; i++);

	strcpy(str, str + i);
}