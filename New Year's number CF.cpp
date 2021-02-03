#include<bits/stdc++.h>
using namespace std;

void checkIfPossible(int x, int a, int b, bool isPossible[], int n)
{
    if(x>n)
    {
        return;
    }
    if(isPossible[x])
    {
        return;
    }
    isPossible[x]=true;
    checkIfPossible(x+a,a,b,isPossible,n);
    checkIfPossible(x+b,a,b,isPossible,n);
}
bool checkPossible(int a, int b, int n)
{
    bool isPossible[n+1]={false};
    checkIfPossible(0,a,b,isPossible,n);
    return isPossible[n];
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a=2020,b=2021;
        if(checkPossible(a,b,n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}