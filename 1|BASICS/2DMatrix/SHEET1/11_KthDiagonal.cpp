/*	11. Print kth Diagonal
	   4 5 6
	3|1 2 3
        2|4 5 6
k=    1|7 8 9		k=2 (4 8)
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{	int k,r=3,c=3,a[][100]={{1,2,3},{4,5,6},{7,8,9}};//	a[][100]={{1,4,3,8},{5,6,7,2},{4,7,9,5}};	
	int row,col;
	cout<<"k="; 	cin>>k;		
	if(k<c )
	{	row=r-k; col=0;
		for(  ; row<=r-1 && col<=k-1 ; row++, col++)		
			cout<<a[row][col]<<" ";	
	}
	else//k>c
	{	row=0; col=k-r;	//row<=r-1 &&
		for(  ;  col<=c-1 ; row++, col++)		
			cout<<a[row][col]<<" ";
	}
}
