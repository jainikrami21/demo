#include<iostream>
using namespace std;
main()
{
	int i,j,a[3][3];
	cout<<"enter a matrix :";
	for(i=0;i<3;i++)
	{
    	for(j=0;j<3;j++)
		{
    		cin>>a[i][j];
		}
    }
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		cout<<" "<<a[i][j];
		}
		cout<<"\n";		
}
}