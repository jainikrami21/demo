//A5.Write a Program of find the element of given position from the array
#include<stdio.h>
main()
{
	int a[100],i,pos,size,item;
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Enter Array elements: \n ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position that you want to insert: ");
	scanf("%d",&pos);
	printf("enter item that you want to insert: ");
	scanf("%d",&item);
	for(i=size;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=item;
	size++;
	printf("result array element: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}