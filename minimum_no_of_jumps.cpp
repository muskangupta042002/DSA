#include<bits/stdc++.h>
using namespace std;
//O(N) solution

 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1) return 0;
        if(arr[0]==0)
        {
            return -1;
        }
        int maxr=arr[0]; //maximum reachable index in the array
        int step=arr[0]; //number of steps we can still take
        int jumps=1;     //amount of jumps needed to reach the maximal reachable position
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                return jumps;
            }
            maxr=max(maxr,i+arr[i]);
            step--;
            if(step==0)
            {
                jumps++;
                if(i>=maxr)
                {
                    return -1;
                }
                step=maxr-i;
            }
        }
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends

  //class Solution{
  //public:
    //int min(int x, int y) { return (x < y) ? x : y; }
    //int minJumps(int arr[], int n){
        // Your code here
        //int i,j;
        //int jumps[n];
        //if(n==0 || arr[0]==0)
            //return -1;
        //jumps[0]=0;
        //for(i=1;i<n;i++)
        //{
            //jumps[i]=INT_MAX;
            //for(j=0;j<i;j++)
            //{
                //if(i<=j+arr[j] && jumps[j]!=INT_MAX)
                //{
                    //jumps[i]=min(jumps[i],jumps[j]+1);
                    //break;
                //}
            //}
    
        //}
        //if(jumps[n-1]!=INT_MAX)
            //return jumps[n-1];
        //else
            //return -1;
    //}
//};