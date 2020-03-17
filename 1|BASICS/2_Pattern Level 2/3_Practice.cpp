/*1.  n=4
	1+2+3+4  +17+18+19+20
	    5+6+7  +14+15+16
 		8+9  +12+13
		    10+11					      
*/
#include<iostream>
using namespace std;
int main()
{	int n, i,j;
  	int t,p1=1,p2;				cout<<"n= "; 	cin>>n;		
   for(i=n; i>=1 ;i--)
  {	
	for(j=1 ; j<=(n) ;j++)
      {	if((i+j)<=n ) 			cout<<" ";	
		else if((i+j)>=(n) ) 	cout<<p1++<<"+";	
		//else				cout<<"+"<<p1++;
      } 	   
	//cout<<" ";     	
	p2=(i*(i-1)+1) + (p1-1);
        for(j=1; j<i  ; j++)
	{		cout<<p2++<<"+";
	}
	//if(j==n)	
	cout<<p2;
 	cout<<endl;
  }
	
}
