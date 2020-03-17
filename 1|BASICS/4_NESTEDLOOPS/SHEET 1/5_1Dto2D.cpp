//5. 1-D Array into 2-D
#include<bits/stdc++.h>
using namespace std;
int main()
{
		int *arr,**brr,n,a,b;	int i,j;
		cin>>n>>a>>b;
arr=new int[n];	brr=new int[a][b];
//Array I/P
	for(i=0 ; i<n ;i++)
		cin>>arr[i];
cout<<endl;
//Code
	for(i=0; i<a ;i++)
	{
		for(j=0 ; j<b; j++)
			brr[i][j]=arr[i];
	}
}
