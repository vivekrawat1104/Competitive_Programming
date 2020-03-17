//3. Equilibirium Pstn.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *a,n,lsum=0,rsum=0,i;
	a=new int[n];	cout<<"n= "; 	cin>>n;
	for(i=0 ; i<n ;i++)
		cin>>a[i];
//Code
	lsum=a[0];
	for(i=2; i<n ;i++)	rsum+=a[i];
	for(i=2; i<=(n-2) ; i++)
	{	lsum+=a[i-1];
		rsum-=a[i];
		if(lsum==rsum)
		{	cout<<"Value= "<<a[i]<<" index=  "<<i;
			break;
		}
	}	

}
