#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second<b.second;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        unordered_map<int, int> mp; 
        for (int i = 0; i < n; i++) 
        {
            mp[arr[i]]++; 
        }
        int maxn = max_element(mp.begin(), mp.end(), compare)->second;
        cout<<maxn<<endl;
    }
    return 0;
}