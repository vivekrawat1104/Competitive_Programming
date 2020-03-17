/*12. Write a C++ program to find sum of an array
using recursion.
Sample Input :	5	[1 2 3 4 5]
Sample Output :	15				*/
#include<bits/stdc++.h>
using namespace std;
#define sizea sizeof(a)/sizeof(a[0])
int sumarr(int a[], int n){
	if(n<0)	return 0;
	return a[n]+sumarr(a,n-1);
}
void printarray(int a[],int n){
	for(int i=0 ; i<n ;i++)
		cout<<a[i]<<" ";
}
int main(){
	int a[]={1,-2,3,-4,5}; 
	printarray(a,sizea);			cout<<"\n";
	cout<<"Sum= "<<sumarr(a,sizea-1)<<"\n"; 
}
