#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check(char *str);

void main()
{
	char str[40000];
	int N, k;
	for(N = 0; N < 200; N++)
	{
		k = N * N;
		itoa(k, str, 10);
		if(check(str))
			printf("%d\n",N);
	}
}

int check(char *str)
{
	char i, j;
	int len;
	len = strlen (str);
	i = 0;
	j = len - 1;
	while (str[i] == str[j] && i <= j)
	{
		i++;
		j--;
	}
	if(i<j)
		return 0;
	else
		return 1;
}