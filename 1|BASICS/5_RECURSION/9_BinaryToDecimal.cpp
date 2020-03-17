/*9. Write a C++ program to compute Decimal equivalent of a Binary Number (represented as decimal integer).
Sample Input :	1010
Sample Output :	10		*/
#include<bits/stdc++.h>
using namespace std;
int decimalconvert(int n,int i){
	if(n==0)	return 0;
	return ( (n%10)*pow(2,i) ) + decimalconvert( n/10,++i );		
}
int main(){
	int n,i;	cout<<"n="; cin>>n;
	cout<<decimalconvert(n,i=0)<<"\n";
}
