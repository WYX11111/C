#include <stdio.h>
#include <string.h>

void Showchars(char str[],int n);
void main()
{
	char str1[100],str2[100];
	int i,j;
	printf("输入一个字符串:\n");
	gets(str1);
//把字符串中的连续非数字字符子串换成*
	for (i=0,j=0;str1[i];i++,j++)
 	{
 		if (str1[i]>='0'&&str1[i]<='9')
 			str2[j]=str1[i];
 		else
			str2[j]='*';
		if(j>0 && str2[j] == '*' &&  str2[j-1] == '*')
		j--;
	 }
	 str2[j]='\0';	
	
	printf("替换后的字符串:\n");
	Showchars(str2,100);
 } 

//显示字符串a中的n个字符
 void Showchars(char str[],int n)
 {
 	printf("%s\n",str);
 }