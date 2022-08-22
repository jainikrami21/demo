#include<stdio.h>
struct student
{
	int roll_no;
	char name[20];
};
main()
{
 struct student s1,s2,s3,s4,s5;
 printf("\n enter student roll no : ");
 scanf("%d",&s1.roll_no);
 printf("\n enter student name : ");
 scanf("%s",&s1.name);

 printf("\n enter student roll no ");
 scanf("%d",&s2.roll_no);
 printf("\n enter student name : ");
 scanf("%s",&s2.name);
 
 printf("\n enter student roll no : ");
 scanf("%d",&s3.roll_no);
 printf("\n enter student name : ");
 scanf("%s",&s3.name);
 
 printf("\n enter student roll no : ");
 scanf("%d",&s4.roll_no);
 printf("\n enter student name : ");
 scanf("%s",&s4.name);
 
 printf("\n enter student roll no : ");
 scanf("%d",&s5.roll_no);
 printf("\n enter student name : ");
 scanf("%s",&s5.name);

 printf("\n student roll no : %d", s1.roll_no);
 printf("\n student name : %s", s1.name);

 printf("\n student roll no : %d", s2.roll_no);
 printf("\n student name : %s", s2.name);

 printf("\n student roll no : %d", s3.roll_no);
 printf("\n student name : %s", s3.name);
 
 printf("\n student roll no : %d", s4.roll_no);
 printf("\n student name : %s", s4.name);
 
 printf("\n student roll no : %d", s5.roll_no);
 printf("\n student name : %s", s5.name);

}

