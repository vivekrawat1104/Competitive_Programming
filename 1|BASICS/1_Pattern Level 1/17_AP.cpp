/* 17. Find the sum and n terms of arithmetic series given the first three terms of series.
I/P  - 5  [1 2 3]
O/P-     [1 2 3 4 5] 	15				*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,d1,d2,n,*a,sum=0;				cout<<"n= ";	 	cin>>n;		a=new int[n];
	cin>>a[0]>>a[1]>>a[2];
	d1=a[1]-a[0];	
	d2=a[2]-a[1];
if(d1==d2)	
{	for( i=3; i<n ; i++ ){
		a[i]=a[i-1]+d1;	//cout<<a[i]<<" "; 
	} 
		for(i=0 ;  i<n ;i++){
			cout<<a[i]<< " ";		sum+=a[i];
		}
			cout<<"\nsum = "<<sum<<endl;
}

}
