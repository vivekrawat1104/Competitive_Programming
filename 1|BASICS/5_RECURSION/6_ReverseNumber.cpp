/*6. Write a C++ program to reverse the digits of a number using recursion.
Sample Input :	1452
Sample Output :	2541		*/
#include<bits/stdc++.h>
using namespace std;
int reverse(int n){	
	static int rev=0;	 
	if(n==0)	return rev;
	(rev=rev*10 + n%10);	
	reverse(n/10);
}
int main(){
	int n;		cout<<"n= "; 	cin>>n;
	cout<<reverse(n)<<endl;
}
