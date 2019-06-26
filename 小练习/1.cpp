#include <stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
    int sum,k,j,m;
	
	for(j = 1; ;j = j + 2)
	{
		sum = 0;
		for(k = 0; k < i; k++)
			sum = sum + 2 * k + j;
		if(sum == i * i * i)
			break;
	}
	
	printf("%d^3=",i);

	for(m = 0; m < i; m++)
	{
		printf("%d",j + 2 * m);
        printf("+");
	}
	printf("%d",(j + 2 * k));
	printf("\n");
	return 0;
}
