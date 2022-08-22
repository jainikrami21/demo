#include<stdio.h>
void que1()
{  
   int i=0,a[2];
   char ans;
   for(i=1;i<=5;i++)
   {
   	switch(i)
   	{
	printf(" que1: who is PM in india(Current) ?\n");
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
  break;
	
	
};
void que2()
{  
   int i=0,ans,a[2];
   
	printf(" que2 : Who is Current CEO in Google ?\n");
	printf(" 1 sundai pichai \n");
	printf(" 2 mark zuckerberg  \n");
	printf(" 3 elon musk \n");
	printf(" 4 Andy Jassy \n");
	lable:
	scanf("%d",&ans);
    if(ans == 1)
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
	break;
};


main()
{
	printf("             Welcome To KBC         \n");
	que1();
	que2();
}
