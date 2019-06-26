#include <stdio.h>

int main()
{
	int m, i;
	for(m = 1; m <= 100; m = m+2)
	{
		for(i = 2; i <= m; i++)
		{
			if(m % i == 0)
				break;
			if(i == m - 1)
			{
				printf("%d ", m);
			}
		}
	}
	return 0;
}
