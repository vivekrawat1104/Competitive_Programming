/*	1. Matrix Transpose.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{	int i,j,n=5,a[][100]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};	
//{{1,5,7},{2,4,6},{9,3,8}};	
	char t;
	for(i=0 ; i<n;i++)
	{	for(j=i+1; j<n ;j++)
		{	t=a[i][j];		//swap
			a[i][j]=a[j][i];
			a[j][i]=t;
		}		
	}
	//print
	for(i=0 ; i<n;i++)
	{	for(j=0; j<n ;j++)
		{	cout<<a[i][j]<<" ";
		}		
		cout<<endl;
	}

}
