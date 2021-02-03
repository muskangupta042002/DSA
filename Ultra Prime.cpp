#include<bits/stdc++.h>
using namespace std;
int arr[1000001]={0};
vector<int> p(1000001,0);
void seivee()
{
    
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
}


int main()
{
    int l,r;
    cin>>l>>r;
    seivee();
    for(int i=2;i<1000000;i++)
    {
        if(arr[i]==0)
        {
            int temp=i;
            int sum=0;
            while(temp!=0)
            {
                sum+=temp%10;
                temp/=10;
            }
            if(arr[sum]==0)
            {
                p[i]=1+p[i-1];
            }
            else{
                p[i]=p[i-1];
            }
        }
        else
        {
            p[i]=p[i-1];
        }
    }
    
    cout<<p[r]-p[l-1]<<endl;
    return 0;
}