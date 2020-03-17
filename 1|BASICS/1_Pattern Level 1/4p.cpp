/*7.  n=4
	 1
	 3   2
	 4   5  6
        10  9  8  7	
        11 12 13 14 15 	      
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int c;				cout<<"n= "; 	cin>>n;		
   for(i=1; i<=n ;i++)
  {	if(i%2==0)   c=((i)*(i+1))/2;
	else		  c=((i-1)*(i+1-1))/2 +1;     
	 for(j=1 ; j<=(i) ;j++)
      {
 		if(i%2==0)	    cout<<" "<<c--<<" ";	
		if(i%2==1)	    cout<<" "<<c++<<" ";	
      } cout<<endl;
  }
	
}
