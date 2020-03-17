/*7.  n=4
	 1
	-2 -3
	 4  5 6
        -7 -8 -9 -10		      
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int c=1;				cout<<"n= "; 	cin>>n;		
   for(i=1; i<=n ;i++)
  {
      for(j=1 ; j<=(i) ;j++)
      {
		if((i%2)==0)  	   cout<<"-"<<c++<<" ";	
		else 			     cout<<" "<<c++<<" ";	
      } cout<<endl;
  }
	
}
