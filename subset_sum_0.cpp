// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
#define MAX 500
class Solution {
public:
    void multiply(int x, vector<int> &res)
    {
        int c=0;
        
        for(int i=0;i<res.size();i++)
        {
            int prod=res[i]*x+c;
            res[i]=prod%10;
            c=prod/10;
        }
        while(c)
        {
            res.push_back(c%10);
            c/=10;
        }
        
    }
    vector<int> factorial(int N){
        // code here
        vector<int> res;
        res.push_back(1);
        int res_size=1;
        for(int x=2;x<=N;x++)
        {
            multiply(x,res);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends