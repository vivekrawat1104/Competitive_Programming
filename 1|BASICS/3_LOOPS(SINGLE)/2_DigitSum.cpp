/*2. Write a program in C++ to print sum of digits.	*/
#include<bits/stdc++.h>
using namespace std;
int digitsum(int n){
	int s=0;
	while(n>0){
		s+=n%10;		n/=10;	
	}
	return s;
}
	
int main(){
	int n,sum=0;	cout<<"n= "; cin>>n;
	cout<<"sum of digits= "<<digitsum(n)<<"\n";
}
