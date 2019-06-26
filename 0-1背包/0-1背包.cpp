#include <stdio.h>
#define N 6
#define W 21

int B[N][W] = {0};
int w[6] = {0,2,3,4,5,9};
int v[6] = {0,3,4,5,8,10};

void F()
{
	int k, c;
	for (k = 1; k < N; k++)
	{
		for (c = 1; c < W; c++)
		{
			if (w[k] > c)
			{
				B[k][c] = B[k - 1][c];
			}
			else
			{
				int value1 = B[k - 1][c - w[k]] + v[k];
				int value2 = B[k - 1][c];
				if(value1 > value2)
				{
					B[k][c] = value1;
				}
				else
				{
					B[k][c] = value2;
				}
			}
		}
	}
}

int main()
{
	F();
	printf("%d\n",B[5][20]);
	return 0;
}