#include<bits/stdc++.h>
using namespace std;


int arr[1000001]={0};
int main()
{
    int N;
    cin>>N;
    int p[N];
    for(int i=0;i<N;i++)
    {
        cin>>p[i];
    }
    int n=1000000;
    //arr[i]==0, prime
    //arr[i]==1, non-prime
    arr[0]=1,arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*2;j<=n;j+=i)
            {
                arr[j]=1;
            }
        }
        
    }
    int mini=INT_MAX;
    int maxi=0;
    for(int i=0;i<N;i++)
    {
        
        if(arr[p[i]]==0)
        {
            mini=min(mini,p[i]);
            maxi=max(maxi,p[i]);
            
        }
    }
    if(maxi)
    {
        cout<<maxi-mini<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}