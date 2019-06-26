#include <stdio.h>

void fun(int m, int n)
{
	int i,j,num = 0;

	for(i = m; i < n; i++)
	{
		for(j = 2; j < i; j++)
			if(i % j == 0)
			{
				printf("%d ", i);
				num++;

				if(num == 8)
				{
					printf("\n");
					num = 0;
				}
				break;
			}
	}
}

int main()
{
	int i,j;
	scanf("%d%d",&i,&j);
	fun(i,j);
	return 0;
}