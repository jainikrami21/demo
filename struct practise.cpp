#include<stdio.h>
struct age
{
	struct a;
};
struct dob
{
	int dd,mm,yy;
};

struct student
{
	int roll_no;
	char name[20];
	struct dob date;
	struct age a; 
};
main()
{
	struct student s1;
	printf("\n enter student roll no :");
	scanf("%d",&s1.roll_no);
	
	printf("\n enter student name :");
	scanf("%s",&s1.name);
	
	printf("\n enter student dob :");
	scanf("%d%d%d",&s1.date.dd,&s1.date.mm,&s1.date.yy);

	printf("\n enter student age :");
	scanf("%d",&s1.a);
	
	printf("\n student roll no : %d", s1.roll_no);
	
	printf("\n student name :%s",s1.name);
	
	printf("\n student dob :%d/%d/%d",s1.date.dd,s1.date.mm,s1.date.yy);

    printf("\n student age :%d",s1.a);
}