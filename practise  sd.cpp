#include<iostream>
using namespace std;
class math
{
	int i,ans=1;
	public:
		void fact(int c)
		{
			for(i=1;i<=c;i++)
			{
				ans=ans*i;
			}
			cout<<"Factorial = "<<ans;
		}
};
main()
{
 int a;
 cout<<" Enter the number to find factroial : ";
 cin>>a;
 math obj;
 obj.fact(a);
}