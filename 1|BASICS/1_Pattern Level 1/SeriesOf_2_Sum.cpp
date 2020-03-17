/*15.  n=5 Print & Sum
         2,4,8,16,32-----
*/
#include<iostream>
using namespace std;
int main()
{		int n, i,j,sum=0;
  		cout<<"n= "; 	cin>>n;		
   for(i=0; i<n ;i++)
  {	sum+=(2<<i);
       
cout<<(2<<i)<<" ";	
  }
	cout<<"SUM= "<<sum;	
}
