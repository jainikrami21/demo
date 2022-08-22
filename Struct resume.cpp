#include<stdio.h>
//struct name

//	;
//};
//struct dob
//{
//	int dd,mm,yy;
//};

struct resume
{
	
	char name[20];
    char address[20];
//	struct dob date;
//	struct age a; 
};
main()
{
	struct resume a;
	printf("\n enter Your Name :");
	gets(a.name);
	
	printf("\n enter Street Address :");
	scanf("%s",&a.address);
//	printf("\n enter student name :");
//	scanf("%s",&s1.name);
	
//	printf("\n enter student dob :");
//	scanf("%d%d%d",&s1.date.dd,&s1.date.mm,&s1.date.yy);

//	printf("\n enter student age :");
	//scanf("%d",&s1.a);
	
	//printf("\n student roll no : %d", s1.roll_no);
	
	printf("\n %s",a);
	printf("\n %s",a);
//	printf("\n student dob :%d/%d/%d",s1.date.dd,s1.date.mm,s1.date.yy);

 //  printf("\n student age :%d",s1.a);
}