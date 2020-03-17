/*3.  n=4
	 0
	 1  0
  	 1  0  1
         0  1	0  1	       
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int c;				cout<<"n= "; 	cin>>n;	c=n*(n+1)/2;	
   for(i=1; i<=n ;i++)
  {	
	for(j=1; j<=i ;j++){
		if(c%2==0)	cout<<"0 ";
		else			cout<<"1 ";		c--;
	}cout<<endl;
  }
	
}
