#include<stdio.h>
void que1()
{  
   int i=0;
   char ans;
	printf(" que 1 : who is PM in india(Current) ?\n");
	printf(" a rahul gandhi \n");
	printf(" b soniya gandhi \n");
	printf(" c amit shah \n");
	printf(" d Narendra Modi \n");
	lable:
	scanf("%c",&ans);
    if(ans == 'd')
    {
     printf("\n right answer!");
    }
else 
{
	i++;
	printf("\n wrong answer!\n better a luck next time.");
	if(i<3)
	{
		goto lable;
	}
}
	
	
};
main()
{
	printf("             Welcome To KBC         \n");
	que1();
}
