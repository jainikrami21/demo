#include<stdio.h>
xyz(int num1,int num2)
{
    int ans;
	ans=num1-num2;
	printf("subtraction = %d",ans);
}
main()
{
 int a,b;
 printf("Enter A :");
 scanf("%d",&a);
 printf("Enter B :");
 scanf("%d",&b);
 xyz(a,b);
}

