#include<stdio.h>
struct student 
{
	int id,
	char name[20];
}s[5];
main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf(" enter student %d Id :",i+1);
		scanf("%d",&s[i].id);
		printf(" enter student %s Name :",i+1);
		//scanf("%s",&s[i].name);
		gets(s[i].name)
	}
}