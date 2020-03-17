/*15.  n=5 Print & Sum
         2,10 6,20 18,40 54,80 162,160 Sum=552
*/
#include<iostream>
using namespace std;
int main()
{		int n, i,j,sum=0 ,t1=2,t2=10;
		cout<<"n= "; 	cin>>n;  		
		cout<<t1<<","<<t2<<" " ;		sum+=(2+10);
   for(i=2; i<=n ;i++)
  {	sum+=(t1*3)+(t2*2);
	cout<<(t1=t1*3)<<","<<(t2=t2*2)<<" ";	
  }
	cout<<"SUM= "<<sum;	
}
