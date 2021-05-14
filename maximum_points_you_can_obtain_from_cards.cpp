//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/599/week-2-may-8th-may-14th/3739/
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sz=n-k; //idea is to subtract min sum of remaining n-k elements
        if(n<k)
        {
            return -1;
        }
        int tot_sum = 0,min_sum=INT_MAX;
        int i,j=0,cs=0;
        for(i=0;i<n;i++)
        {
            tot_sum+=cardPoints[i];
            cs+=cardPoints[i];
            if(i>=sz-1)
            {
                min_sum=min(min_sum,cs);
                cs-=cardPoints[j++];
            }
        }
        if(k==n)
        {
            return tot_sum;
        }
        
        return tot_sum-min_sum;
    }
};