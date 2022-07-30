/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0], count=0;
        for(int num: nums)
        {
            if(count == 0)
                ans=num;
            if(ans == num)
                ++count;
            else
                --count;
        }
        return ans;
    }
};
// @lc code=end

