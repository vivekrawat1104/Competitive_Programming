/*5. Write a C++ program to compute sum of digits of a number using recursion.
Sample Input :	1452
Sample Output :	12		*/
#include<bits/stdc++.h>
using namespace std;
int digitsum(int n){
	if(n==0)	return 0;
	return n%10 + digitsum(n/10);
}
int main(){
	int n;		cout<<"n= "; 	cin>>n;
	cout<<digitsum(n)<<endl;
}
