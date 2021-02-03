#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int p[n];
    p[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1]+arr[i];
    }
    int q,l,r;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        int sum=0;
        if(l==0)
        {
            sum=p[r];
        }
        else
        {
            sum=p[r]-p[l-1];

        }
        cout<<sum<<endl;
    }
    return 0;
}