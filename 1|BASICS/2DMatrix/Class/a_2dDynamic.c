//a.) 2d array create
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int **arr,n,i,j;	
	cout<<"n= ";	cin>>n;	
	arr=(int**)malloc(sizeof(int*)*n);
	for(i=0 ;i<n; i++)
	{	arr[i]=(int*)malloc(sizeof(int)*n);
	}
	// I/P Array
	for(i=0; i<n ;i++)
	{
		for(j=0 ; j<n ;j++)
			cin>>arr[i][j];
	}
	for(i=0; i<n ;i++)
	{
		for(j=0 ; j<n ;j++)
			cout<<arr[i][j]<<" ";
	}
}
