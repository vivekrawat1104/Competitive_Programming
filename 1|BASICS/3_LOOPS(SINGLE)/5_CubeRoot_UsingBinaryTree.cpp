/*5. C++ program to find cubic root of a number  		(using Binary Search)	*/
#include <bits/stdc++.h> 
using namespace std; 
// Returns the absolute value of n-mid*mid*mid 
double diff(double n,double mid) { 
	if (n > (mid*mid*mid)) 
		return (n-(mid*mid*mid)); 
	else
		return ((mid*mid*mid) - n); 
} 

// Returns cube root of a no n 
double cubicRoot(double n) 
{ 	// Set start and end for binary search 
	double start = 0, end = n; 
	// Set precision 
	double e = 0.0000001; 
	while (1) { 
		double mid = (start + end)/2; 
		double error = diff(n, mid); 
		// If error is less than e then mid is 
		// our answer so return mid 
		if (error <= e) 
			return mid; 
		// If mid*mid*mid is greater than n set 
		// end = mid 
		if ((mid*mid*mid) > n) 
			end = mid; 
		// If mid*mid*mid is less than n set 
		// start = mid 
		else
			start = mid; 
	} 
} 

// Driver code 
int main() { 
	double n; 	cout<<"n= "; cin>>n;	
	cout<<"Cubic root is= "<< cubicRoot(n)<<"\n";
	cout<<" "<<cbrt(n)<<"\n";
	cout<<" "<<pow(n,1.0/3.0)<<"\n"; 
	return 0; 
} 

