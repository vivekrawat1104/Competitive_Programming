/* 1. Write a program in C++ to find sum of factorial of digits of a number.
Ex: Input – 146, output – 745 (1+24+720)		*/
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==1)	return 1;
	return n * fact(n-1);
}
	
int main(){
	int n,sum=0;	cout<<"n= "; cin>>n;
	while(n>0){
		sum+=fact(n%10);	n/=10;	
	}
	cout<<"sum of factorial of digits= "<<sum<<"\n";
}
