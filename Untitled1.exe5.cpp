#include<iostream>
using namespace std;
class matrix
{
   int i,j,a[3][3];
   public:
   	void getmatrix()
   	{
      for(i=0;i<3;i++)
       {
   	         for(j=0;j<3;j++)
   	        {  
   		       cout<<"enter a["<<i<<"]["<<j<<"]";
   		       cin>>a[i][j];
			}
	    }
	}	
 void displaymatrix()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
	   cout<<\n;
}
}
};
main()
{
	matrix m,n;
	m.getmatrix();
	n.getmatrix();
	
	m.displaymatrix();
	n.displaymatrix();
	
}