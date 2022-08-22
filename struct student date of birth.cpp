#include<stdio.h>
struct dob
{
	int dd,mm,yy;
};
struct student
{
	int roll_no;
	char name[20];
	struct dob date;
};
main()
{
	 struct student s1;
	 printf("\n enter student Roll no : ");
	 scanf("%d",&s1.roll_no);
	 
	 printf("\n enter student Name : ");
	 scanf("%s",&s1.name);
	 
	 printf("\n enter student date of birth : ");
	 scanf("%d %d %d",&s1.date.dd,&s1.date.mm,&s1.date.yy);
	 
	 printf("\n student roll no : %d", s1.roll_no);
	 printf("\n student name : %s", s1.name);
	 printf("\n student date of birth : %d/%d/%d ", s1.date.dd,s1.date.mm,s1.date.yy);
}
