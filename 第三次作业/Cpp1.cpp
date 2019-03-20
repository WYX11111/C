#include<stdio.h>

void main()
{
	long int a;
	int b,c,d,e;
	printf("请输入一个五十六进制数");
	scanf("%lx",&a);
	e=a&0x0000f;
	d=a>>4;
	d=d&0x0000f;
	c=a>>12;
	c=c&0x0000f;
	b=a>>16;
	b=b&0x0000f;
	if(b==e&&c==d)
		printf("Yes\n");
	else
		printf("No\n");

}
