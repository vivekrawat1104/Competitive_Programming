//4. Frequency ocuurs k-times
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={2,3,2,3,5};
	int i,j,n=5,k=2,count,ck=0;
	vector<bool> visited(n,false);
//Array
	for(i=0 ; i<n ;i++)
		cout<<a[i]<<" ";
cout<<endl;
//Frequency Count	
	for(i=0  ; i<n ; i++)
	{	if(visited[i]==true)	continue;	
		count=1;			
		for(j=i+1 ; j< n; j++)
		{	if(a[i]==a[j])
			{	count++;	visited[j]=true;
			}
		}	
		if(count==1){	cout<<a[i]<<endl;	}
	}	
	
}
