/*2. Write a program to check if the given number is palindrome or not.
Sample Input :	121
Sample Output :	Palindrome		*/
#include<bits/stdc++.h>
using namespace std;
int reverse(int t){
	static int rev=0;		 
	if(t==0)	return rev;
	rev=rev*10 + t%10; 	
	reverse(t/10);
}
int main(){
	int n;		cout<<"n= "; 	cin>>n;
	(n==reverse(n))?cout<<"Palindrome\n" : cout<<"Not Palindrome\n";
}
