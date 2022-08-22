#include<stdio.h>
main()
{
	int a,b,c;
 printf("enter a number:\n");
 scanf("%d",&a);
 printf("enter b number:\n");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
printf("a=%d\nb=%d",a,b);
}

