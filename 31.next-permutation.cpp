#include<bits/stdc++.h>
using namespace std;class Solution {

public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(), ind1, ind2;
        if(n==1)
            return;
        ind1=n-2;
        while(ind1>=0 && nums[ind1]>=nums[ind1+1])
            --ind1;
        if(ind1>=0)
        {
            ind2=n-1;
            while(nums[ind2]<=nums[ind1])
                --ind2;
            swap(nums[ind1], nums[ind2]);
        }

        for(int i=ind1+1; i<(n+ind1+1)/2; ++i)
            swap(nums[i], nums[n-i-1]);
    }
};
