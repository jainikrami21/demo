//A1.Write a program to entera tenelements using Array and make a summation of the numbers 
//and average ofsummation
#include<stdio.h>
main()
{
	int n,a[10],i,sum=0;
	float avg;
	printf(" enter element of an array:");
	scanf("%d",&n);
	printf("enter array element: ");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	sum=sum+a[i];
	printf("sum=%d",sum);
	avg=(float)sum/n;
	printf("avg=%f",avg);
}