#include <stdio.h>
#include <limits.h>

void main()
{
   
   int ans=1;
   int i,n,flag=0;

   for(n = 1; ;n++)
   {
	   for(i=1;i<=n;i++)
	   {
		   ans*=i;
		   if(INT_MAX/ans<i+1)
		   {
			   flag = 1;
			   break; 
		   }
	   }

	   ans = 1;
	   if(flag == 1)
		   break;
   }
   printf("%d是最大可阶乘数字",n);
}
