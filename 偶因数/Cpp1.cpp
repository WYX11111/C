#include<stdio.h>

void fun (int x, int *p, int *n);
void main()
{
	int i, x, n;
	int a[100];
	printf("����һ�����֣�");
	scanf("%d",&x);
	fun (x, a, &n);
	printf("ż������Ϊ��");
	for (i = 0; i < n; i++)
		printf("%d   ",a[i]);
	printf("\n");
}

void fun (int x, int *p, int *n)
{
	int i, m = 0;
	for(i = 2; i <= x; i = i+2)
	{
		if(x % i == 0)
		{
			*p = i;
			p = p + 1;
			m = m + 1;
		}
	}
	*n = m;
}