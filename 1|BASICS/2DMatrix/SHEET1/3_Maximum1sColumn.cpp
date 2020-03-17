/*	3. max 1's wala column.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{	int indx,i,j,n=3,a[][100]={{1,0,1},{1,1,0},{1,0,1}},max=0,c=0;	
	for(j=0 ; j<n; j++)
	{	for( i=0; i<n ; i++)
		{	if(a[i][j]==1)
				c++;				
		}		
		if(c>max)	{  max=c; indx=j;  c=0; } 
	}
	cout<<max<<" "<<indx;

}
