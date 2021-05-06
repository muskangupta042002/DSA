#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n] , i;
        for(i=0;i<n;i++)
        cin>>a[i];
        rotate(a, n);
        for (i = 0; i < n; i++)
            cout<<a[i];
        cout<<"\n";
    }
        return 0;
}
// } Driver Code Ends


void rotate(int arr[], int n)
{
    int temp,a[n];
    a[0]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        a[i]=arr[i-1];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
}