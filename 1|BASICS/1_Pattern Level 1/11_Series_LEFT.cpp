/* 11. Sin x= ( x - (x^3/3!) + (x^5/5!) + (x^7/7!) + ---		)
I/P-   90 1000
O/P-  1 
I/P Description:	An int x, denoting angle in degree.
			An int n, denoting no.    of iteration.				*/
#include<bits/stdc++.h>
using namespace std;
int main(){	int i;
	float p,sum=0,t,x,n;		cout<<"x= ";cin>>x;	cout<<"n= ";cin>>n;
	if(n==1)			cout<<sin(x*x);
	else{	t=x/1.0;	sum=t;
		for(i=2,p=3; i<n ; i++, p+=2){
			t*=(  (pow(x,2)) / (p*(p-1))  );
			if(i%2==0)	sum-=t;
			else			sum+=t;				
		}
			cout<<"sum= "<<sum;
	} 
	
}
