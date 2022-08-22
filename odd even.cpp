#include<stdio.h>
main()
{   int num;
	printf("Enter a Number :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d Enter is Odd",num);
	}
	else
	{
		printf("%d enter is even",num);
	}
}