#include<stdio.h>
sub();
main()
{
 sub();
}
sub()
{
	int a,b,ans;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	ans=a-b;
    printf("subtraction = %d",ans);	
}
