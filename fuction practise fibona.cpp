#include<stdio.h>
int fibo(int fn)
{
	if(fn<1)
	{
		return 1;
	}
	fn= fn-1 + fn-2;
}
main()
{
 int x;
 printf("\n enter number for fibona series :");
 scanf("%d",&x);
 printf("fibona of %d is %d",x,fibona(x));
}


