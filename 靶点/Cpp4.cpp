#include<stdio.h>

void main()
{
	int a[80][80], i, j, k, p, h, l, max, min;
	printf("�������������Ϊ��");
	scanf("%d",&h);
	printf("�������������Ϊ��");
	scanf("%d",&l);
	for(i = 0; i < h ; i++)
	{
		for(j = 0; j < l; j++)
		{
			printf("��%d�У���%d�е���Ϊ��",i+1,j+1);
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
				printf("��%d�У���%d�е������Ǹ�ʲô�㣬����Ϊ%d\n",i+1,p+1,min);
			}
			else
				printf("��%d��û���Ǹ�ʲô��\n",i+1);
			break;
		}
	}
}