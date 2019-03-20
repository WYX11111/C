#include<stdio.h>

void Input (int a[9][9],int n, int k);
void Output (int a[9][9],int n);
int num = 1;
void main()
{
	int a[9][9]={0}, k = 0, n;
	printf("ÂİĞı·½Õë½×ÊıÎª£º");
	scanf("%d",&n);
	Input(a,n,k);
}

	void Output(int a[9][9],int n)
	{
		int i, j;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
				printf("%-3d",a[i][j]);
			printf("\n");
		}
	}

	void Input(int a[9][9],int n, int k)
	{
		int i, j;
		i = k;
		j = k;
		for(; j<n-k; j++,num++)
			a[i][j] = num;
		j = j-1;
		i = i+1;
		for(; i<n-k; i++,num++)
			a[i][j] = num;
		i = i-1;
		j = j-1;
		for(; j>=k; j--,num++)
			a[i][j] = num;
		j = j+1;
		i = i-1;
		for(; i>=k+1; i--,num++)
			a[i][j] = num;
		if(num <= n*n)
			Input(a,n,k+1);
		else
			Output(a,n);
	}