//Write aprogramto enter aten elements usingArray andfind outthe to countthe total 
//number of odd and evennumbers

#include<stdio.h>
main()
{
	int a[10],i,even =0,odd=0;
	printf("Enter %d integer number : \n",10);
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\n Even numbers in the array are \n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
			even++;
		}
	}
	printf("\n\n odd numbers in the array are \n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
			odd++;
		}
	}
	printf("\n\n Total Even numbers: %d\n",even);
	printf("\n Total odd numbers: %d\n",odd);
	printf("\n");
}