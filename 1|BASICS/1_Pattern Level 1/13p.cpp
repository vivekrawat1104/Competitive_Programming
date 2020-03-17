/*8.  n=5
       AZ,CY,EX,GW,IV
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	char c1='A',c2='Z';				cout<<"n= "; 	cin>>n;		
   for(i=1; i<=n ;i++)
  {
     cout<<c1<<c2<<" ";
	c1+=2; c2-=1;
  }
		
}
