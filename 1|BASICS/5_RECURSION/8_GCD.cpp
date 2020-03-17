/*8. Write a C++ program to compute GCD of two numbers using recursion.
Sample Input :	30 35
Sample Output :	5		*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m){
		if(m>n && m%n==0)	return n;
		else if(m<n && n%m==0)	return m;
		if(n<m)	gcd( m%n, n );	
		else if(n>m)	gcd( n%m, m );	
}
int main(){
	int n,m;	cout<<"n="; cin>>n;  cout<<"m="; cin>>m; 
	cout<<gcd(n,m)<<"\n";
}
