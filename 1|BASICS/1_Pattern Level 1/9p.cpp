/*  n=3
          *
	 * *
        *   *
         * *
          *  
*/
#include<iostream>
using namespace std;
int main()
{
   int n, i,j;				cout<<"n= "; 	cin>>n;
   for(i=1; i<=n ;i++)
  {
      for(j=1 ; j<=(n-1)+i ;j++)
      {
		if((i+j)==n+1)  cout<<"*";
 		else if(j==(n-1)+i) cout<<"*";	
		else 			     cout<<" ";	
      } cout<<endl;
  }
     for(i=n-1; i>=1 ;i--)
  {
      for(j=1 ; j<=(n-1)+i ;j++)
      {
		if((i+j)==n+1)  cout<<"*";
 		else if(j==(n-1)+i) cout<<"*";	
		else 			     cout<<" ";	
      } cout<<endl;
  }	
}
