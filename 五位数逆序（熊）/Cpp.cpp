#include<stdio.h>

void main()
{
	int r, m;
	scanf("%d",&m);
	while(m != 0)
	{
		r = m % 10;
		printf("%d",r);
		m = m / 10;
	}
}
