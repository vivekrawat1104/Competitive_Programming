/*9. Write a program in C++ to print all factors of a number in increasing order.	*/
#include<bits/stdc++.h>
using namespace std;
	
int main(){
	int i,n,sqt;	cout<<"n= "; cin>>n;	sqt=sqrt(n);
	for(i=1 ; i<=sqt ;i++){
		if(i*(n/i)==n)
			cout<<i<<" "; 	
	}
	for(i=sqt+1 ; i<=n ; i++){
		if(i*(n/i)==n)
			cout<<i<<" "; 	
	}
	cout<<"\n";//Cuberoot-> cbrt(8);
}
