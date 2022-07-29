#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0, ans, n=nums.size();
        ans=INT_MIN;
        for(int i=0; i<n; ++i)
        {
            currSum += nums[i];
            ans = max(currSum, ans);
            if(currSum > ans)
                ans = currSum;
            if(currSum < 0)
                currSum = 0;
        }
        return ans;
    }
};
