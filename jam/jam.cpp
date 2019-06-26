#include <stdio.h>
#include <stdlib.h>

int main()
{
	char base = 'a';
	int st, ed, num, i, j, k, m;

	scanf("%d%d%d",&st, &ed, &num);

	int length = ed - st + 1;

	char *p = (char*)malloc(sizeof(int) * length);
	int *q = (int*)malloc(sizeof(int) * num);
	char *str = (char*)malloc(sizeof(int) * num + 1);

	fflush(stdin);

	scanf("%s",str);

	for(i = 0; i < length; i++)
	{
		p[i] = base + st + -1 + i;
	}

	for(i = 0; i < num; i++)
	{
		for(j = 0; j < length; j++)
			if(str[i] == p[j])
			{
				q[i] = j;
				break;
			}
	}

	int t = 0;
	while(t < 5 && q[0] != length - num)
	{
		for(i = num - 1, j = length - 1; i >= 0; i--,j--)
		{
			if(q[i] != j)
			{
				q[i] = q[i] + 1;

				for(k = i + 1; k < num; k++)
					q[k] = q[k - 1] + 1;
				break;
			}
		}

		for(m = 0; m < num; m++)
			str[m] = p[q[m]];
		printf("%s\n", str);
		t++;
	}
	return 0;
}
