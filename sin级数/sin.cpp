#include <stdio.h>
//求sin(x)的级数

void main()
{
	float t,i,x,p,z=1,s=0,u=1;
	
	int count=1;

	scanf("%f",&x);
	
	while(u>1e-5)
	{
		t = 1;

		for(i = 1; i <= (2*count-1); i++)
		{
			t*=i;
		}
		
		p = 1;
		
		for(i=1; i<=(2*count-1); i++)
		{
			p*=x;
		}

		u=p/t;
		s+=z*u;
		z*=-1;
		count++;
		printf("%f\n",s);
	}

	printf("%f\n",s);
}


//求题目给的那个级数

void main()
{
	float t,i,x,p,z=1,s=0,u=1;
	
	int count=1;

	scanf("%f",&x);
	
	while(u>1e-5)
	{
		t = 1;

		for(i = 1; i <= count-1; i++)
		{
			t*=i;
		}
		
		p = 1;
		
		for(i=1; i<=(2*count-1); i++)
		{
			p*=x;
		}

		u=p/t/(2*count-1);
		s+=z*u;
		z*=-1;
		count++;
	}

	printf("%f\n",s);
}