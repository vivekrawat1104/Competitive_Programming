/*Q4. Write a C++ program to compute a b using recursion.
Sample Input :	4 2
Sample Output :	16	*/
#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){	
	static int rev=0;	 
	if(b==0)	return 1;
	return a * power(a , b-1);
}
int main(){
	int a,b;		cout<<"a= "; 	cin>>a;	cout<<"b= "; 	cin>>b;
	cout<<power(a,b)<<endl;
}
