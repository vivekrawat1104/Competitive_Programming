/*	9. Sum of 2 square matrix.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{	int i,j,n=3,a[][100]={{1,2,3},{4,5,6},{7,8,9}},b[][100]={{9,8,7},{6,5,4},{3,2,1}};	
	for(i=0 ; i<n;i++)
	{	for(j=0; j<n ;j++)
		{
			cout<<a[i][j]+b[i][j]<<" ";
		}	cout<<endl;
	}
}
