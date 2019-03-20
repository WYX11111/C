#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	char s[20];
	int i;
	FILE *fp;

	fp = fopen("output.txt","w");
	if (fp == NULL)
	{
		printf("文件不存在!\n");
		exit(0);
	}

	for (i = 500;i < 2501; i++)
	{
		itoa(i, s, 16);
		fprintf(fp,"        if cmp(text,\"%d\")==0:\n",i);
		fprintf(fp,"                a = \"");
		fprintf(fp,"\\x%c%c\\x0%c\"\n",s[1],s[2],s[0]);
	}
	fclose(fp);
}
