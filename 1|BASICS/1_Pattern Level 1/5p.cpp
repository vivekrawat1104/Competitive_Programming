/*7.  n=4
	 1
	 3  2
	 6  5 4
        10 9 8 7		      
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int c;				cout<<"n= "; 	cin>>n;		
   for(i=1; i<=n ;i++)
  {	c=i*(i+1)/2;
      for(j=1 ; j<=(i) ;j++)
      {
 			    cout<<" "<<c--<<" ";	
      } cout<<endl;
  }
	
}
