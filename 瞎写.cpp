/*#include <stdio.h>

int main()
{
	int a[10],i,j,max,t;
	printf("输入十个数字:");
	for(i = 0; i < 10; i++)
		scanf("%d",&a[i]); //输入十个数
	
	for (i = 9; i > 0; i--)  //用i记录最后一位的位置
	{
		max = 0;             //max置0
		for (j = 1; j <= i; j++)
			if (a[j] > a[max])
				max = j;

		if (max != i)
		{
			t = a[i];
			a[i] = a[max];
			a[max] = t;
		}
	}

	for(i = 0; i < 10; i++)
		printf("%d ",a[i]);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	char c1,c2;
	c1=getchar();
	c2=getchar();
	putchar(c1);
	putchar('\n');
	putchar(c2);
	putchar('\n');
}
*/
/*
#include <stdio.h>
int main()
{
	char c1,c2;
	c1=getchar();
	c2=getchar();
	printf("c1=%d c2=%d\n",c1,c2);
	printf("c1=%c c2=%c\n",c1,c2);
	return 0;
}*/
/*
#include <stdio.h>

int main()
{
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	max = a;
	if(b >= a)
		max = b;
	if(c >= max)
		max = c;
	printf("%d",max);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a,b,m,r = 0,num = 0;
	scanf("%d",&a);

	b = a;

	while(b != 0)
	{
		m = b % 10;
		num++;
		r = r * 10 + m;
		b = b / 10;
	}

	printf("%d是%d位数,逆序为%d",a,num,r);
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	int I;
	double k, a, b, c, d, e;

	a = 100000 * 0.1;
	b = a + 100000*0.075;
	c = b + 100000*0.05;
	d = c + 100000*0.03;
	e = d + 400000*0.015;
	
	printf("请输入利润:");

	scanf("%d",&I);

	if (I <= 100000)
		k = I * 0.1;
	else if (I <= 200000)
		k = a + (I - 100000) * 0.075;
	else if (I <= 400000)
		k = b + (I - 200000) * 0.05;
	else if (I <= 600000)
		k = c + (I - 400000) * 0.03;
	else if (I <= 1000000)
		k = d + (I - 600000) * 0.015;
	else
		k = e + (I - 1000000) * 0.01;
	printf("奖金是: %.2f\n",k);
	return 0;
}*/

/*
#include <stdio.h>
int main()
{
	int I, n;
	double k, a, b, c, d, e;

	a = 100000 * 0.1;
	b = a + 100000*0.075;
	c = b + 100000*0.05;
	d = c + 100000*0.03;
	e = d + 400000*0.015;
	
	printf("请输入利润:");

	scanf("%d",&I);
	
	n = I / 100000;
	if (n > 10)
		n = 10;

	switch(n)
	{
	case 0: k = I * 0.1; break;
	case 1: k = a + (I - 100000) * 0.075; break;
	case 2:
	case 3: k = b + (I - 200000) * 0.05; break;
	case 4:
	case 5: k = c + (I - 400000) * 0.03; break;
	case 6:
	case 7:
	case 8:
	case 9: k = d + (I - 600000) * 0.015; break;
	case 10: k = e + (I - 1000000) * 0.01;
	}

	printf("奖金是 %.2f\n",k);
	return 0;
 }
*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d,result1,result2;

	scanf("%lf %lf %lf",&a,&b,&c);
	d = b * b - 4 * a * c;

	if(a == 0)
		printf("不是二次函数");
	
	else if(d == 0)
	{
		result1 = -b/(2*a);
		printf("两个相等实数根%lf:",result1);
	}

	else if(d > 0)
	{
		result1 = (-b + sqrt(d))/(2 * a);
		result2 = (-b - sqrt(d))/(2 * a);
		printf("两个不相等实数根%.2lf和%.2lf:",result1,result2);
	}

	else
	{
		d = -d;
		result1 = sqrt(d)/(2 * a);  //虚部
		result2 = -b/(2 * a);       //实部
		printf("两个不相等复根%.2lf+%.2lfi和%.2lf-%.2lfi:",result2,result1,result2,result1);
	}
	return 0;
}*/
/*
#include <stdio.h>
void main()
{
	int letters = 0, spaces = 0, digits = 0, others = 0, i;
	char str[100];
	char c;
	printf("请输入字符串：\n");
	scanf("%s",str);
	for(i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
		{
			letters++;
		}
		else if (c == ' ')
		{
			spaces++;
		}
		else if (c >= '0'&&c <= '9')
		{
			digits++;
		}
		else
		{
			others++;
		}
	}
	printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letters, digits, spaces, others);
}

#include <stdio.h>

int main()
  { void swap (int *p1,int *p2);
     int a,b;
	 int *pointer_1,*pointer_2;

	 scanf ("%d,%d",&a,&b);
	 pointer_1 = &a;pointer_2 = &b;

	 if (a<b)
		 swap(pointer_1,pointer_2);
	 printf ("max=%d,min=%d",a,b);

	return 0;
  }

void swap (int *p1,int *p2)
  {
	  int temp;
	  temp= *p1;
	  *p1= *p2;
	  *p2= temp;
  }

#include <stdio.h>

void POPSort(int *a,int n)
{
	int i,j,t;
	for (i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if (a[j]>a[j+1])
			{
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
}

int main()
{
	int a[10] = {2,4,545,5,21,77,4,6,-11,1};
	int b[10];

	int i, j;
	for (i = 0; i < 10; i++)
		b[i] = a[i];

	POPSort(a, 10);

	for(i = 0; i < 10; i++)
		printf("%d  ", a[i]);

	printf("\n");
	
	for(i = 0; i < 10; i++)
		printf("%d  ", b[i]);	
	printf("\n");

	for(i = 0; i < 10; i++)
		for(j = 0; j < 10; j++)
		{
			if(a[i] == b[j])
				printf("%d  ", j+1);
		}
	return 0;
}


#include <stdio.h>
#define N 50
void fun(char s1[N], char s2[N]);

int main()
{
	char s1[N];
	char s2[N];
	
	scanf("%s",s1);
	fflush(stdin);
	scanf("%s",s2);

	fun(s1,s2);

	printf("%s",s1);

	return 0;
}

void fun(char *s1, char *s2)
{
	int i, j;
	for (i = 0; s1[i] != '\0'; i++);
	
	for(j = 0; s2[j] != '\0';)
	{
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
}

#include <stdio.h>

int main()
{
	int i =1,j=6;
	printf("%d", i & j);
	return 0;
}
#include <stdio.h>
#include <string.h>
struct student
{
	char name[20];
	char xo[10];
	int age;
}s[3],*p;

void main()
{
	p = &s[0];
	int i;
	for(i = 0; i < 3; i++)
	{
		scanf("%s",s[i].name);
		fflush(stdin);
		scanf("%s",s[i].xo);
	
		scanf("%d",&s[i].age);
		fflush(stdin);
	}

	for(i = 0; i < 3; i++)
		printf("%s %s %d\n",s[i].name,s[i].xo,s[i].age);
}
#include<stdio.h>

int min(int a, int b, int c)
{
	int t = a;
	if( t > b )
		t = b;
	if( t > c)
		t = c;
	return t;
}

int main()
{
	printf("%d",min(6,7,5));
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

#define incresize 10

int size;

typedef struct 
{
	int *base;
	int top;
	int stacksize;
}SqStack;

SqStack Init()
{
	SqStack s;
	s.base=(int *)malloc(size*sizeof(int));
	s.top=-1;
	s.stacksize=size;//size为自己设定的值
	return(s);
}

void push(SqStack &s,int e)//入栈
{
	s.top++;
	s.base[s.top] = e;
}

void pop(SqStack &s)//出栈
{
	int e;
	while(s.top != -1)
	{
		e=s.base[s.top];
		printf("%d \n",e);
		s.top--;
	}
}

void GetTop(SqStack s,int e)//获取栈顶的元素
{
	if(s.top != -1)
	{
		e=s.base[s.top];
		printf("%d ",e);
	}
}

void main()
{
	SqStack s;
	int e[3]={1,2,3};
	int i;

	printf("输入一个整数：");
	scanf("%d",&size);

	s=Init();
	for(i=0;i<3;i++)
		push(s,e[i]);
	
	pop(s);
}
*/

/*
#include <stdio.h>

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

void main()
{
	int i = 10;
	int j = 5;
	swap(i,j);
	printf("%d %d", i ,j);
}

#include <stdio.h>

int main()
{
	char* s;
	scanf("%s",&s);
	char s2[20];
	scanf("%s",&s2);
	
	printf("%s",s);
	printf("%s",s2);

	return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void alltrim (char *p2);

void main ()
{
	char s[]={"  Good bye!  "};
	char *p = s;
	printf("%d\n", strlen (p));

	alltrim (p);
}

void alltrim (char *p2)
{
	int n, i;
	char *p1;
	
	p1=p2;
	printf("%s\n", p1);
	n=strlen (p1);
	i=n-1;
	
	while(p1[i]==' ')
	{
		i--;
	}
	p1[i+1]='\0';
	printf("%d\n",i);

	i=0;
	while(p1[i]==' ')
	{
		p1++;
	}
	printf("%d\n",i);
	printf("%s", p1);
}*/