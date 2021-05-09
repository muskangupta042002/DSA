class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            map[nums[i]]++;
        }
        int c=0;
        for(auto x: map)
        {
            if(x.second >1)
            {
                c=x.first;
                
            } 
        }
        
       return c; 
    }
};