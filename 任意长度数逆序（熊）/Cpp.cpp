#include<stdio.h>

void main()
{
	int r, m, k = 0;
	scanf("%d",&m);
	while(m != 0)
	{
		r = m % 10;
		printf("%d",r);
		m = m / 10;
		k++;
	}
	printf("\n%dÎ»Êý×Ö\n",k);
}
