#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,result=0;
        cin>>n;
        if(n%2==1)
        {
            result=1;
        }
        else
        {
            /* code */
            while(n>2)
            {
                n=n/2;
                if(n%2==1)
                {
                    result=1;
                    break;
                }
            }
        }
        if(result==1)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
        
    }
    return 0;
}