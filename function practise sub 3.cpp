#include<stdio.h>
int sub();
main()
{
    int c;
	c=sub();
	printf("subtraction = %d",c);
}
int sub()
{
 int ans;
 int a,b;
 printf("Enter A :");
 scanf("%d",&a);
 printf("Enter B :");
 scanf("%d",&b);
 ans=a-b;
 return ans;
}

