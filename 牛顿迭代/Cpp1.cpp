#include <stdio.h>
#include <math.h> 

void main()
{
	//比如要求一个方程x*x*x-2*x*x-x+2=0的一个解
	float x,x0,f,f1;
	x = -3;  //这个数任意，因为求的是一个解，求出来的会是离这个数最近的
	do{
		x0=x;
		f=x0*x0*x0-2*x0*x0-x0+2;  //方程手动输入
		f1=3*x0*x0-4*x0-1;            //输入其导函数
		x=x0-f/f1;
	}while(fabs(x-x0)>=1e-5);         //这是判断绝对值是不是在范围之内，我这里设置的是10的-5次方
	printf ("%f\n",x);
}