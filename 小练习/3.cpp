#include <stdio.h>

int * fun(int *p, int n)
{
	int i;
	int j = 0;
	int b[100];

	for(i = 0; i < n; i++)
	{
		if(p[i] == 0)
			b[j++] = p[i];
	}

	for(i = 0; i < n; i++)
	{
		if(p[i] != 0)
			b[j++] = p[i];
	}

	for(i = 0,j = 0; i < n; i++,j++)
	{
		p[i] = b[j];
	}
	return p;
}

int main()
{
	int i,n;

	scanf("%d",&n);

	int *a = new int[n];

	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	fun(a, n);

	for(i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}