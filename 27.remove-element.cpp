#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start=0, n=nums.size(), end=n-1;
        if (n==0)
            return 0;
        
        while(start<end)
        {
            if(nums[end] == val)
                end--;
            else if(nums[start] == val)
            {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
            else
                start++;
        }
        while(end<n && nums[end]!=val)   
            ++end;
        return end;

    }
};
