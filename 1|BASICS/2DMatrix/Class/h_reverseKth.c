//f) Print kth-Straight Diagonals
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100][100]={{1,2,3,4},{5,6,7,8},{1,2,3,4},{5,6,7,8}};
	int i,j,k=0,*arr,srow,scol,n=4;
	cout<<"k= ";	cin>>k;
/*	arr=(int*)malloc(sizeof(int)*n*n);
	for(i=0 ; i<n ;i++)
	{	for(j=0 ; j<n ;j++)
			cin>>a[i][j];
	}
*/	//Print
	for(i=0 ; i<n ;i++)
	{	for(j=0 ; j<n ;j++)
			cout<<a[i][j]<<" ";
	cout<<endl;	
	}
	//Straight Diagonals 
	cout<<endl<<"Straight Diagonals \n";
	//for(k=0  ; k<=(2*n-1)  ;k++)
	{	if(k<n)	        {	srow=0;     scol=k;	 }
		else		        {	srow=n-k+1;   scol=n-1; }
		if(k<n)		
		{	for(  ; srow<=k && scol>=0  ; srow++,scol--)
			{ 	cout<<a[srow][scol]<<" ";	
			}	cout<<endl;	
		}
		else	
		{	for(   ; srow<=(n-1) ; srow++,scol--)
			{ 	cout<<a[srow][scol]<<" ";	
			}	cout<<endl;	
		}
	}
	
}
