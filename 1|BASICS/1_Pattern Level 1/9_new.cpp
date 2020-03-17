/*  n=3
          *
	 * *
        *   *
         * *
          *  
*/
#include<iostream>
using namespace std;
int main(){
	int n;	cout<<"n= ";	cin>>n;
	int i,j,counter=1;
	// Normal Loop
	for(i=1; i<=n ; i++){
		for(j=(n-i) ; 	j>=1 ; 			j--  )
		{	cout<<" ";
		}			
		for( j=1; 		j<=counter  ; 		j++ )
		{	if( j==1 ||	j==counter)	cout<<"*";
			else					cout<<" ";
		}
		cout<<"\n";
		counter+=2;
	}
	
	// Opposite Loop 
		counter-=4;
	for(i=1; 	i <=n-1 ;	 	i++){
		for(j=1 ; j<=i ; j++)
			cout<<" ";
		for( j=1; j<=counter  ; j++ )
		{	if( j==1 ||	j==counter)	cout<<"*";
			else					cout<<" ";
		}
		cout<<"\n";
		counter-=2;
	}	
}
