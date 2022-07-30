#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        else if(n == 2)
            return 2;
        --n;
        int prev=2, pprev=1, ans=0;
        while(--n>0)
        {
            ans = prev + pprev;
            pprev = prev;
            prev = ans;
        }
        return ans;
    }
};
