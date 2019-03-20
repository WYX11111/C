#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

void Getstr(char a[]);
int Sep(char a[],char word[50][20],char time[]);
void sort (char w[50][20]);
void Del(char word[50][20], char time[],int t);
void main()
{
	char a[100], word[50][20], time[50];
	int i,t;
	memset(time,'0',50);
	memset(word,' ',1000);
    Getstr(a);
	t = Sep(a,word,time);
	Del(word,time,t);
	for(i=0;i<50;i++)
		word[i][0]=time[i];
	sort(word);
}

void Getstr(char a[])
{
	int i;
	printf("输入一个英文句子:\n");
	gets(a);
	for(i = 0; a[i]; i++)
	{
		if(a[i]>64 && a[i]<91)
			a[i] = a[i]+'a'-'A';
	}
}

int Sep(char a[],char word[50][20],char time[])
{
	int t = 0, i = -1, j = 1, work = OUT;
	for(t = 0; a[t]; t++)
	{
		if(a[t]<97 || a[t]>122)
			work = OUT;
		else
		{
			if(work == OUT)
			{
				work = IN;
				i++;
				j = 1;
				time[i] = '1';
			}
		}
		if(work == IN)
		{
			word[i][j] = a[t];
			j++;
		}
		if(work == OUT)
		{
			word[i][j] = '\0';
		}
	}
	word[i][j] = '\0';
	return i;
}

void Del(char word[50][20], char time[],int t)
{
	int i, n, p, q, flag,sum;
	for (i = t; i>0; i--)
	{
		for(n = 0;n<i;n++)
		   {
			for(q = 1,sum = 0;q<20;q++)
			{
				flag = 1;
				if(word[n][q]==word[i][q])
					flag = 0;
				sum+=flag;
			}
			if(sum==0)
			 {
				time[n] = time[n]+1;
				time[i] = '0';
				 for(p = 0;p<20;p++)
					 word[i][p] = ' ';
			 }
			}

	}
}

void sort (char word[50][20])
{
	int i ,j ,n, flag;
	char temp[20],c;
	for(i = 1; i < 50; i++)
	{
		flag = 0;
		for (j = 0; j < 50-i; j++)
			if(word[j][0] < word[j+1][0])
			{
				c = word[j][0];
				word[j][0] = word[j+1][0];
				word[j+1][0] = c;
				for(n=0;n<20;n++)
					temp[n]=word[j][n];
				for(n=0;n<20;n++)
                    word[j][n]=word[j+1][n];
				for(n=0;n<20;n++)
					word[j+1][n]=temp[n];	
			}
	}
	for(i=0;i<50;i++)
	{
	  if(word[i][0]!='0')
	  {
		for(j=1;j<20;j++)
		{
			if(word[i][j]!=' ')
				printf("%-c",word[i][j]);
		}
		printf("(%c) ",word[i][0]);
		if(i%4==3)
			printf("\n");
	  }
	}
}