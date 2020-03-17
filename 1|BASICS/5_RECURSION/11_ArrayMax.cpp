/*11. Write a C++ program to find max of an array using recursion.
Sample Input : 	5	[10 20 25 12 3]
Sample Output :	25					*/
#include<bits/stdc++.h>
using namespace std;
#define sizea sizeof(a)/sizeof(a[0])
#define max(x,y)  ((x>y)?x:y)
/*int maxarr(int x,int y){
	int max=((x>y)?x:y);	return max;
}*/
int arrmax(int a[], int n){
	if(n==0)	return(a[0]);		
	return max( a[n] , arrmax(a,n-1) );	
}
void printarray(int a[],int n){
	for(int i=0 ; i<n ;i++)
		cout<<a[i]<<" ";
}
int main(){
	int a[]={-1,-2,-5,-4,30}; 
	printarray(a,sizea);			cout<<"\n";
	cout<<"Max= "<<arrmax(a,sizea-1)<<"\n"; 
	//cout<<max(5,4)<<"\n";
}
