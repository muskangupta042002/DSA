#include<bits/stdc++.h>
using namespace std;
    void findSubsequence(int i, vector<int>& nums, vector<vector<int>>&ans, vector<int>&temp){
        if(i>=nums.size()){
            ans.push_back(temp);
           // temp.erase();
            return;
        }
        temp.push_back(nums[i]);
        findSubsequence(i+1,nums,ans,temp);
        temp.pop_back();
        findSubsequence(i+1,nums,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        findSubsequence(0,nums,ans,temp);
        return ans;
    }

int main()
{


	vector<int>nums = {1,2,3};
	vector<vector<int>>ans = subsets(nums);
	//printint all the subsequence.
	cout<<"All possible subsequences are "<<endl;
	for (auto it : ans) {
        cout<<"[ ";
		for(auto a: it){
            cout<<a<<" ";
        }
        cout<<"]"<<endl;
	}

}