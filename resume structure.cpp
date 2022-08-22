#include<stdio.h>
struct Dob
{
	int dd,mm,yy;
};
struct qulification
{
	char degree[30];
};
struct resume
{
	char name[40],address[40],email_id[20];
	struct qulification degree[30];
	struct Dob date;
	int pincode,experience;
	long long mobile;
};
main()
{
	struct resume s1;
	printf("\n Enter Your Name  :");
	gets(s1.name);
	printf("\n Enter a Street Address  :");
	gets(s1.address);
	printf("\n Enter a Email Id  :");
	gets(s1.email_id);
	printf("\n Enter a Mobile Number  :");
	scanf("%ldld",&s1.mobile);
	fflush(stdin);
	printf("\n Enter a Qulification  :");
	scanf("%s",s1.degree);
	printf("\n Enter a Dob  :");
	scanf("%d%d%d",&s1.date.dd,&s1.date.mm,&s1.date.yy);
		//fflush(stdin);
//	printf("\n Enter a Area Pincode  :");
//	scanf("%d",&s1.pincode)
//
//	printf("\n Enter a Total Experience  :");
//	scanf("%d",&s1.experience);
//	
	printf("\n-----------------Resume-------------");
	printf("\n ------------------------------------");
	printf("\n Your Name :%s",s1.name);
	printf("\n Street Address :%s",s1.address);
	printf("\n Email_id  :%s",s1.email_id);
	printf("\n Mobile Number  :%ld%ld  :",s1.mobile);
	printf("\n Qulification  :%s",s1.degree);
	printf("\n Dob  :%d/%d/%d",s1.date.dd,s1.date.mm,s1.date.yy);
	printf("\n Pincode  :%d",s1.pincode);
	printf("\n Experience  :%d",s1.experience);
}
	
	
	
	
	
	
	 
	