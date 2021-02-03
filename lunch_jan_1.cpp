#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t=5;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int arr[3]={x,y,z};
	    sort(arr,arr+3);
	    int sum=arr[0]+arr[1];
	    if(sum==arr[2])
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}