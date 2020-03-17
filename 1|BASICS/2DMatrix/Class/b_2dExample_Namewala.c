//b.) 2d Array example
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char **s,name[100];	int i,n;
	cout<<"n= ";	cin>>n;	
	s=(char**)malloc(sizeof(char*)*n);	
	for(i=0; i<n ;i++)
	{	scanf("%s",name);
		s[i]=(char*)malloc(sizeof(char)*strlen(name));
		strcpy(s[i],name);
	}
	//O/p
	for(i=0 ;i<n ;i++)
	{	cout<<s[i]<<" ";
	}
}
