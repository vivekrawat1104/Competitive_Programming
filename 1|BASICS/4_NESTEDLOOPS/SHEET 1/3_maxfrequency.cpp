//3. Print Max. Frequency.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={2,2,3,4,4,2},n=6;
  	int i,j,count,indx=0,max=0;
	vector<bool> visited(n,false);
//Array
	for(i=0 ; i<n ;i++)
		cout<<a[i]<<" ";
cout<<endl;
//Frequency Count
	for(i=0 ; i<n ;i++)
	{
		if(visited[i]==true)	continue;
		count=1;			
		for(j=i+1; j<n ; j++)
		{	if(a[i]==a[j])	
			{	count++;
				visited[j]=true;	
			}		
		}
		cout<<a[i]<<" = "<<count<<endl;
		if(count>max)
		{	max=count; indx=i;
		}			
	}
	cout<<"Max Frequency element= "<<a[indx];
}
