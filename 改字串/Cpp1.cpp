#include <stdio.h>
#include <string.h>

void Showchars(char str[],int n);
void main()
{
	char str1[100],str2[100];
	int i,j;
	printf("����һ���ַ���:\n");
	gets(str1);
//���ַ����е������������ַ��Ӵ�����*
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
	
	printf("�滻����ַ���:\n");
	Showchars(str2,100);
 } 

//��ʾ�ַ���a�е�n���ַ�
 void Showchars(char str[],int n)
 {
 	printf("%s\n",str);
 }