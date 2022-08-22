//Write aprogram to enter afiveelements usingArray andprintit onascreen.

#include<stdio.h>
main()
 {
 	int a[5],i;
 	printf(" Enter Array Elements : ");
 	for(i=0;i<5;i++)
 	{
 	  scanf("%d",&a[i]);
	}
	printf("\n Array Elements : ");
 	for(i=0;i<5;i++)
 	{
 		printf("%d ",a[i]);
	}
 }