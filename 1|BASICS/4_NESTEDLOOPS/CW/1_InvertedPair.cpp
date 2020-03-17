//1. Inverted Pairs Count
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *a,n,i,pairs=0;
	a=new int[n];	cout<<"n= "; 	cin>>n;
	for(i=0 ; i<n ;i++)
		cin>>a[i];
//Code
	lsum=a[0];
		rsum+=a[i];
	for(i=2; i<(n-1) ;i++)
	{	for(i=2; i<(n-1) ;i++)
		{	if(lsum==rsum)
			{	cout<<"Value= "<<a[i]<<" index=  "<<i;
			break;
			}
		}	
	}	

}
