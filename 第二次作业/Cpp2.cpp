#include<stdio.h>

void main()
{
	long a,b,c,d;
	printf("������һ��ʮ��������:");
	scanf("%x\n",&a);
	d=a>>24;
	d=d&0x000000ff;
	c=a>>8;
	c=c&0x0000ff00;
	b=a<<8;
	d=d&0x00ff0000;
	a=a<<24;
	a=a&0xff000000;
	a=a+b+c+d;
	printf("���������Ϊ:");
	printf("%x",a);

}