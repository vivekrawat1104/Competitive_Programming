/*1.  n=4  (Z-Pattern)
	1 2 3 4 5
                4
             3
           2
        1 2 3 4 5 					      
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int t;				cout<<"n= "; 	cin>>n;		
   for(i=n; i>=1 ;i--)
  {	
      for(j=1 ; j<=(n) ;j++)
      {	if(i==j ) 			cout<<i;
		else if(i==n || i==1)  cout<<j;	
		else				cout<<" ";	
      } cout<<endl;	t--;
  }
	
}
