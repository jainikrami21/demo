//Define a classto represent abook shop Include the followingmemberss Data Members
//-Name ofAuthor
//-Name ofTitle
//-Name ofPrice
//-NamePublisher
//Member Functions
//-To Assign Values
//-To Display Values
#include<iostream>
#include<string>
using namespace std;
class book_shop
{
	char author_name[30],title[30],publisher_name[30];
	int price;
	public:
	void input()
	{
	  cout<<"Enter a Author Name :\n";
	  gets(author_name);
	  cout<<"Enter a Title Name :\n";
	  gets(title);
	  cout<<"Enter a Publisher Name:\n";
	  gets(publisher_name);
	  cout<<"Enter a Book Price:\n";
	  cin>>price;
    }
	void display()
	{
		cout<<"\n Author Name :"<<author_name;
		cout<<"\n Book Price :"<<price;
		cout<<"\n Publisher Name:"<<publisher_name;
		cout<<"\n Title :"<<title;
	}
};
main()
{
	book_shop obj;
	obj.input();
	obj.display();
}