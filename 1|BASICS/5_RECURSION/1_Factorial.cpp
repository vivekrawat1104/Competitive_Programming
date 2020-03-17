/*Q1. Write a program to find the factorial of a
number using recursion.
Sample Input :	5
Sample Output :	120		*/
#include<bits/stdc++.h>
using namespace std;
int fact(int n){		 
	if(n==0)	return 1;
	return n * fact(n-1);
}
int main(){
	int n;		cout<<"n= "; 	cin>>n;
	cout<<fact(n)<<endl;
}
