#include<stdio.h>

void main()

{
	short int a, b, c, g, h;
	unsigned short max, min, d, e, f;
	printf("请输入三个数字：");
	scanf("%d%d%d", &a, &b, &c);  //输入三个数据
	//强制类型转换
	d = (unsigned short)a;
	e = (unsigned short)b;
	f = (unsigned short)c;
	//判断最大值最小值
	if(d>e)
	{
		max = d;
		min = e;
	}
	else
	{
		max = e;
		min = d;
	}
	if (f>max)
		max = f;
	if (f < min)
		min = f;
	printf("最大无符号为%u,最小无符号数为%u\n", max, min);
	//判断最大值的输入值
	if(max == d)
		g = a;
	else if(max == e)
		g = b;
	else if(max == f)
		g = c;
	//判断最小值的输入值
	if(min == d)
		h = a;
	else if(min == e)
		h = b;
	else if(min == f)
		h = c;
	printf("其输入的值分别为%d和%d\n",g, h);

}