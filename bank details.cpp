//Define a classto represent a bank account. Include the followingmemberss DataMembers
//-Nameofthe depositor
//-AccountNumber
//-Type ofAccount
//-Balance amount in the account
//Member Functions
//-To assign values
//-To deposited anamount
//-Towithdraw an amount after checking balance
//-Todisplay name and balance

#include<iostream>
#include<string>
using namespace std;
class account
{
	char name[20],atype[20];
	int nnum;
	float bal;
	public:
	void gets(int no,char *n,char *t,float b)
	{
	  strcpy(name,n);
	  nnum=no;
	  bal=b;
	  strcpy(atype,t);
	}
	float deposit()
	{
	  float amt;
	  cout<<"Enter a Amount: \n";
	  cin>>amt;
	  bal=bal+amt;	
	}
	float withdraw()
	{
	  float amt;
	  cout<<"How many amount withdraw: \n";
	  cin>>amt;
	  bal=bal-amt;
	}
	void display()
	{
		cout<<"\n Account Number: \n"<<nnum;
		cout<<"\n Account Name: \n"<<name;
		cout<<"\n Account Type: \n"<<atype;
		cout<<"\n Deposit Amount: \n"<<deposit();
		cout<<"\n After Withdraw Amount Balance: \n"<<withdraw();
	}
};	
int main()
{
	int a;
	char b[20],c[20];
	float d;
	account obj;
	cout<<"\n Enter a Account Number :\n";
	cin>>a;
	cout<<"\n Enter a Account Holder Name :\n";
	cin>>b;
	cout<<"\n Enter a Account Type :\n";
	cin>>c;
	cout<<"\n Enter a Balance Amount :\n";
	cin>>d;
	
	obj.gets(a,b,c,d);
	obj.display();
}
  	
