#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> visited;
        vector<int> ans;
        int req;
        for(int i=0; i<nums.size(); ++i)
        {
            req = target - nums[i];
            if(visited.count(req))
            {
                ans.push_back(visited[req]);
                ans.push_back(i);
                return ans;
            }
            visited[nums[i]] = i;
        }
    }
};
