/*13. Write a program to reverse an array using recursion.
Sample Input :	5	[1 2 3 4 5]
Sample Output :	5 4 3 2 1	*/
#include<bits/stdc++.h>
using namespace std;
#define sizea sizeof(a)/sizeof(a[0])
void reversearray(int a[], int start, int end){
	if(start>=end)	return;
	else			{int t;		t=a[start];	 a[start]=a[end];	 a[end]=t; 	}
	reversearray(a,start+1,end-1);
}
void printarray(int a[],int n){
	for(int i=0 ; i<n ;i++)
		cout<<a[i]<<" ";
}
int main(){
	int a[]={1,2,3,4,5}; 
	printarray(a,sizea);			cout<<"\n";
	reversearray(a,0,sizea-1);	
	printarray(a,sizea);
}

