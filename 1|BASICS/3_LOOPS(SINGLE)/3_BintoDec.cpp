/*3. Write a program in C++ to convert binary number to decimal number using loops. */
#include<bits/stdc++.h>
using namespace std;
int bintodec(int n){
	int i=0,dec=0;
	while(n>0){
		dec+=(n%10)*pow(2,i);		n/=10;	i++;	
	}
	return dec;
}
	
int main(){
	int n;	cout<<"n= "; cin>>n;
	cout<<"To Decimal= "<<bintodec(n)<<"\n";
}
