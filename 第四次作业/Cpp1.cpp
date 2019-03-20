#include<stdio.h>

void main()
{
	int i,a,b,m;
	for(i=1;i<1000;i++)
	{
		m = i;
		b = 0;
		while(m != 0)
		{
			a = m%10;
			b=b+a*a*a;
			m = m/10;
		}
		if(i == b)
		printf("%d\n",i);
	}
}