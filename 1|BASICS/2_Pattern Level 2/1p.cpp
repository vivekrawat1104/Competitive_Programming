/*1.  n=4
	****
          ****
	    ****
	      ****					      
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int t;				cout<<"n= "; 	cin>>n;		t=n;
   for(i=1; i<=n ;i++)
  {	
      for(j=1 ; j<=(t) ;j++)
      {	if(i<=j) 	cout<<"*";	
		else		cout<<" ";
      } cout<<endl;	t++;
  }
	
}
