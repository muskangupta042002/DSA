#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int r,b,d,temp;
	    cin>>r>>b>>d;
	    if(abs(r-b)<=d)
	    {
	         cout<<"YES"<<endl;
	    }
	    else
	    {
	         if(r>b) 
	         {
	             swap(r,b);
	         }
	         long long int j=r*(d+1);
	         if(j>=b)
	         {
	             cout<<"YES"<<endl;
	         }
	         else
	         {
	             cout<<"NO"<<endl;
	         }
	    }
	    
	}
	return 0;
}
