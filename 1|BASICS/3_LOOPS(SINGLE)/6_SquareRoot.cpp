/*6. Write a program in C++ to print integer square root of a number.
(Integer cube root of a number n is the largest number x such that x*x<=n)	*/
/*	n^(1/2) = d 
     apply log2 on both sides :-
      log2(n^(1/2)) = log2(d)
      1/2 * log2(n) = log2(d) 
      d = 2^(1/2 * log2(n)) 	=>	d = pow(2, 0.5*log2(n))  
*/
#include <bits/stdc++.h> 
using namespace std; 
double squareroot(double n) { 
    return pow(2, 0.5*log2(n)); 
} 
int main(){
	double n; 	cout<<"n= "; cin>>n;	
	cout<<"Square root is= "<< squareroot(n)<<" "<<"\n";
	cout<<" "<<sqrt(n)<<"\n";
}
