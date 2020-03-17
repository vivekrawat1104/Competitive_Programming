//e) Print Principle Diagonals
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
	//Print
	for(i=0 ; i<n ;i++)
	{	for(j=0 ; j<n ;j++)
			cout<<a[i][j]<<" ";
	cout<<endl;	
	}
	//Diagonal 1
	cout<<endl<<"Diagonal1 \n";
	for(i=0  ; i<n  ;i++)
	{
		for(j=0 ; j<n ;j++)
		{ if(i==j)	cout<<a[i][j]<<" ";	
		}	
	}
	cout<<endl<<"Diagonal2 \n";
	//Diagonal 2 
	for(i=0  ; i<n  ;i++)
	{
			cout<<a[i][n-1-i]<<" ";		
	}
}
