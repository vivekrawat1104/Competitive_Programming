/*3. Define a function mult(m, n) to find the product of two numbers using recursive addition.
Sample Input :	5	2
Sample Output :	10		*/
#include<bits/stdc++.h>
using namespace std;
int mul(int a, int b){		 
	if(b==0)	return 0;
	return a + mul(a , b-1);
}
int main(){
	int a,b;		cout<<"a= "; 	cin>>a;	cout<<"b= "; 	cin>>b;
	cout<<mul(a,b)<<endl;
}
