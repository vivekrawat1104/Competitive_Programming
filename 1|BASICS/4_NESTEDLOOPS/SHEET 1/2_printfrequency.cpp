//2.Print Frequencies
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[]={2,2,3,2,3,4};
   int i,j,count=0,n=6;
   vector<bool> visited(n,false);
   for(i=0; i<n ; i++)
   {
    	if(visited[i]==true) continue;
	int count=1;
  	for(j=i+1 ; j<n ;j++)
	{	if(a[i]==a[j])
		 {	visited[j]=true;
			count++;
		}
	} 
		cout<<a[i]<<"= "<<count<<"\n";
   }
}
