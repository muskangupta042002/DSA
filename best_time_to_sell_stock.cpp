class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini =prices[0];
        int diff=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]>mini)
            {
                diff=max(diff,(prices[i]-mini));
                
            }
            else
            {
                mini=prices[i];
            }
        }
        return diff;
    }
};