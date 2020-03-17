/*10. Write a C++ program to convert decimal number to binary number using recursion.
Sample Input :	10
Sample Output :	1010		*/
#include<bits/stdc++.h>
using namespace std;
void binaryconvert(int n){
	if(n==0)	return;
	binaryconvert(n/2);	
	cout<<n%2<<" "; 	
}
int main(){
	int n;	cout<<"n="; cin>>n;
	binaryconvert(n);
}

