/*8.  n=4
          *
	 ***
        *****
        *****
         ***
           * 
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int t;				cout<<"n= "; 	cin>>n;		t=n; 
   for(i=1; i<=n ;i++)
  {
      for(j=1 ; j<=(t) ;j++)
      {
		if((i+j)<=n)  	   cout<<" ";	
		else 			     cout<<"*";	
      }t++; cout<<endl;
  }
t=t-2;
   for(i=n-1; i>=1 ;i--)
  {
      for(j=1 ; j<=(t) ;j++)
      {
		if((i+j)<=n)  	   cout<<" ";	
		else 			     cout<<"*";	
      }t--; cout<<endl;
  }		
}
