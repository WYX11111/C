#include<stdio.h>
#include<stdlib.h>
void main()

{
	int i, j, k, p ,a[4];
	printf("������һ����λ��������");
	scanf("%d",&i);
	if(i > 9999||i < 1000)
	{
		printf("Error!\n");
		exit(-1);
	}
	else
	{
		a[0] = i/1000;
		a[1] = i/100%10;
		a[2] = i/10%10;
		a[3] = i%10;
	}
	printf("����Ϊ��%d\n",a[0]+10*a[1]+100*a[2]+1000*a[3]);
	for (j = 0; j < 3; j++)
		for (k = 0; k < 3; k++)
			if(a[k] < a[k+1])
			{
				p = a[k];
				a[k] = a[k+1];
				a[k+1] = p;
			}
	printf("�������Ϊ��%d\n",a[0]+10*a[1]+100*a[2]+1000*a[3]);
	printf("��С�����Ϊ��%d\n",a[3]+10*a[2]+100*a[1]+1000*a[0]);
}