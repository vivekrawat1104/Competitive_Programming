//d) 1D to 2D
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100][100],i,j,k=0,*arr;
	cout<<"n= ";	cin>>n;
	arr=(int*)malloc(sizeof(int)*n*n);
	for(i=0 ; i<n ;i++)
	{	for(j=0 ; j<n ;j++)
			cin>>a[i][j];
	}
	//Copy
	for(i=0 ; i<n ;i++)
	{	for(j=0 ; j<n ;j++)
			arr[k++]=a[i][j];
	}
	for(i=0 ; i<n*n ;i++)
	{	cout<<arr[i]<<" ";
	}

}
