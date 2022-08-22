#include<iostream>
using namespace std;
class fibonacci
{
	int a,i,n1=0,n2=1,n3;
	public:
		int fibbo(int a)
		{
			cout<<n1<<" "<<n2<<" ";
			for(i=2;i<a;i++)
			{
				n3=n1+n2;
				cout<<n3<<" ";
				n1=n2;
				n2=n3;
			}
			return 0;
		}
};
main()
{
 int n;
 cout<<" how many number of series u want? ";
 cin>>n;
 fibonacci f;
 f.fibbo(n);
}