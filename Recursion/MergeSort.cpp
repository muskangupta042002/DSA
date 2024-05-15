#include<bits/stdc++.h>
using namespace std;
void merge(int l,int mid, int r, vector < int > & arr){
    int left=l,right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=r){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=l;i<=r;i++){
        arr[i]=temp[i-l];
    }
}
void mergeSort(int start, vector < int > & arr, int end) {
    if(start>=end) return;
    int mid=start+(end-start)/2;
    mergeSort(start,arr,mid);
    mergeSort(mid+1,arr,end);
    merge(start,mid,end,arr); 
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        mergeSort(0, arr,n-1);
        for(auto i: arr){
            cout<<i<<" ";
        }
        cout << endl;
    }
    
    return 0;
}