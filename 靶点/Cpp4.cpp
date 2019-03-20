#include<stdio.h>

void main()
{
	int a[80][80], i, j, k, p, h, l, max, min;
	printf("输入数组的行数为：");
	scanf("%d",&h);
	printf("输入数组的列数为：");
	scanf("%d",&l);
	for(i = 0; i < h ; i++)
	{
		for(j = 0; j < l; j++)
		{
			printf("第%d行，第%d列的数为：",i+1,j+1);
			scanf("%d",&a[i][j]);

		}
	}
	for(i = 0; i < h; i++)
	{
		max = a[i][0];
		p = 0;
		for(j = 1; j < l; j++)
			if(max < a[i][j])
			{
				max = a[i][j];
				p = j;
			}
		min = a[0][p];
		for(k = 1; k < h; k++)
		{
			if(min > a[k][p])
				min = a[k][p];
			if(a[i][p]==min)
			{
				printf("第%d行，第%d列的数是那个什么点，该数为%d\n",i+1,p+1,min);
			}
			else
				printf("第%d行没有那个什么点\n",i+1);
			break;
		}
	}
}