/ { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int g=ceil(m+n)/2;
	    for(int gap=g;gap>0;gap=gap/2)
	    {
	        for(int i=0;i+gap<m+n;i++)
	        {
	            if(i+gap<n)
	            {
	                if(arr1[i]>arr1[gap+i])
	                {
	                    swap(arr1[i],arr1[gap+i]);
	                }
	            }
	            else if(i+gap<m+n && i+gap>=n && i<n)
	            {
	                int j=gap+i-n;
	                if(arr1[i]>arr2[j])
	                {
	                    swap(arr1[i],arr2[j]);
	                }
	            }
	            else if(i>=n && i+gap<m+n )
	            {
	                int k=i-n;
	                if(arr2[k]>arr2[k+gap])
	                    swap(arr2[k],arr2[k+gap]);
	            }
	            else
	            {
	                break;
	            }
	        }
	        sort(arr1,arr1+n);
            sort(arr2,arr2+m);
	    }
	    
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends