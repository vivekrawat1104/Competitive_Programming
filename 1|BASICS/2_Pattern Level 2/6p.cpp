/*1.  n=4  (H-Pattern)
	1	4
	2	3
	3	2
	4 3 2 1
	3	2
	2	3
	1 	4				      
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int t;				cout<<"n= "; 	cin>>n;		t=n;
   for(i=1; i<=(n) ;i++)
  {	
      for(j=1 ; j<=(n) ;j++)
      {	if(j==1&&i<n ) 			cout<<(i);
		else if(j==n&&i<n)  		cout<<(n-i)+1;	
		else if(i==n)  		cout<<t--;			
		else 				cout<<" ";	
      } cout<<endl;	
  }
    for(i=n-1; i>=(1) ;i--)
  {	
      for(j=1 ; j<=(n) ;j++)
      {	if(j==1&&i<n ) 			cout<<(i);
		else if(j==n&&i<n)  		cout<<(n-i)+1;			
		else 				cout<<" ";	
      } cout<<endl;	
  }	
}
