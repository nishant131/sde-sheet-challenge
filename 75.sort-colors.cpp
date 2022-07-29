#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0, h=nums.size() - 1, m=0;

        while(m<=h)
        {
            switch(nums[m])
            {
                case 0:
                    nums[m++]=nums[l];
                    nums[l++]=0;
                    break;
                case 1:
                    m++;
                    break;
                case 2:
                    nums[m]=nums[h];
                    nums[h--]=2;
                    break;
            }
        }

    }
};
