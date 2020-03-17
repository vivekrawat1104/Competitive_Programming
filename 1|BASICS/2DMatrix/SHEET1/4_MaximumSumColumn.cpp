/*	4. max sum wala column.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{	int indx,i,j,n=3,a[][100]={{1,2,3},{4,5,6},{7,8,9}},max=0,c=0;	
	for(j=0 ; j<n; j++)
	{	for( i=0; i<n ; i++)
		{
				c+=a[i][j];				
		}		
		if(c>max)	{  max=c; indx=j;  c=0; } 
	}
	cout<<max<<" "<<indx;

}
