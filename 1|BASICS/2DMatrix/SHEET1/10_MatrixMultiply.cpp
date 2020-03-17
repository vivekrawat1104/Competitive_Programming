/*	10. Mutiply  2 square matrix.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{	int i,j,k,s=0,n=4,a[][100]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}},b[][100]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
//a[][100]={{1,2,3},{4,5,6},{7,8,9}},b[][100]={{1,0,0},{0,1,0},{0,0,1}},c[100][100];	
	for(i=0 ; i<n;i++)
	{	for(j=0; j<n ;j++)
		{	
			for(k=0 ; k<n ;k++)
			{	s+=a[i][k]*b[k][j];
			}	
			cout<<s<<" "; 	s=0;
		}		
		cout<<endl;
	}
}
