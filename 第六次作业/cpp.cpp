#include<stdio.h>
void main()

{
	int a[10], b[10], c[20], i, j, k, flag, t;
	// ������������
	printf("����ʮ�����֣�");
	for (i = 0; i<10; i++)for (i = 0; i<10; i++)
		scanf("%d",&a[i]);
	printf("\n������ʮ�����֣�");
	for (j = 0; j<10; j++)
		scanf("%d",&b[j]);
	//ð������
	for (i = 0; i < 9; i++)
	{
		flag = 0;
		for (j = 0; j < 9-i; j++)
			if(a[j] < a[j+1])
			{
				k = a[j];
				a[j] = a[j+1];
				a[j+1] = k;
				flag = 1;
			}
		if (flag == 0) break;
	}
	printf("\nǰʮ�����ֽ������У�");
	for (i = 0; i<10; i++)
		printf("%d ",a[i]);
	printf("\n");
	//ѡ������
	for (i = 0; i < 9; i++)
	{
		k = i;
		for (j = i+1; j<10; j++)
			if (b[k] < b[j])
				k = j;
		if (k != i)
		{
			t = b[i];
			b[i] = b[k];
			b[k] = t;
		}
	}
	printf("\n��ʮ�����ֽ������У�");
	for (i = 0; i<10; i++)
		printf("%d ",b[i]);
	printf("\n");
	//�ϲ���һ�����齵������
	i = 0;
	j = 0;
	k = 0;
	while(i < 10 && j < 10)
	{
		if(a[i] < b[j])
		{
			c[k] = b[j];
			if(k>0 && c[k] == c[k-1])
				k--;
			k++;
			j++;
		}
		if(a[i] > b[j])
		{
			c[k] = a[i];
			if(k>0 && c[k] == c[k-1])
				k--;
			k++;
			i++;
		}
		if(a[i] == b[j])
		{
			c[k] = b[j];
			if(k>0 && c[k] == c[k-1])
				k--;
			k++;
			j++;
			i++;
		}
	}
	while(i == 10 && j < 10)
	{
		c[k] = b[j];
		if(k>0 && c[k] == c[k-1])
			k--;
		k++;
		j++;
	}
	while(j == 10 && i < 10)
	{
		c[k] = a[i];
		if(k>0 && c[k] == c[k-1])
				k--;
		k++;
		i++;
	}
	printf("\n�������ֵ������У�");
	for (i = 0; i<k; i++)
		printf("%d ",c[i]);
	printf("\n");
}