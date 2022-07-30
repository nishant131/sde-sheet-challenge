#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(), h = n - 1, l = 0, mid, ans=0;
        while(l<=h)
        {
            mid = l + (h-l)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                break;
            }
            if(mid==n-1)
            {
                ans=n;
                break;
            }
            if(nums[mid] < target)
            {
                if(nums[mid+1]>target)
                {
                    ans = mid + 1;
                    break;
                }
                else
                    l = mid + 1;
            }
            else
                h = mid - 1;
        }
        return ans;
    }
};
