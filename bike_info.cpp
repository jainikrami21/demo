#include<stdio.h>
struct bike 
{  
char name[20] ;
 int engin,cc,speed; 
};
main()
{
	struct bike  b1;
	
	printf("enter a bike name :");
//	scanf("%s",&name);
   gets(b1.name);
   printf("enter engin id:");
   scanf("%d",&b1.engin);
   printf("enter cc:");
   scanf("%d",&b1.cc);
   printf("enter   top speed:");
   scanf("%d",&b1.speed);
   
   //printf
   printf("\nbike name : %s",b1.name);
   printf("\nengin_id :%d ",b1.engin);
   printf("\ncc: %d",b1.cc);
   printf("\nspeed: %d km/h",b1.speed);

}