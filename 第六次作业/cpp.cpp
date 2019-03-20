#include<stdio.h>
void main()

{
	int a[10], b[10], c[20], i, j, k, flag, t;
	// 输入两个数组
	printf("输入十个数字：");
	for (i = 0; i<10; i++)for (i = 0; i<10; i++)
		scanf("%d",&a[i]);
	printf("\n再输入十个数字：");
	for (j = 0; j<10; j++)
		scanf("%d",&b[j]);
	//冒泡排序
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
	printf("\n前十个数字降序排列：");
	for (i = 0; i<10; i++)
		printf("%d ",a[i]);
	printf("\n");
	//选择排序
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
	printf("\n后十个数字降序排列：");
	for (i = 0; i<10; i++)
		printf("%d ",b[i]);
	printf("\n");
	//合并成一个数组降序排列
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
	printf("\n所有数字倒叙排列：");
	for (i = 0; i<k; i++)
		printf("%d ",c[i]);
	printf("\n");
}