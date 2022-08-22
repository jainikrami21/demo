//A2.Writeaprogram to find outthemax numberfromgiven10elements of array.
#include<stdio.h>
main()
{
	int a[5],i,max;
	printf("enter elements for the array:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]); 
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("maximun number = %d",max);
}