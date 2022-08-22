#include<stdio.h>
int factorial(int number)
{
	if(number <=1)
	{
		return 1;
	}
	return number * factorial(number-1);
}
main()
{
 int x;
 printf("\n enter number for factorial :");
 scanf("%d",&x);
 printf("factorial of %d is %d",x,factorial(x));
}

