#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter two number");
scanf("%d%d",&x,&y);
add(x,y);
getch();
}
void add(int x,int y)
{
	int c;
	c=x+y;
	printf("sum is %d",c);
}
