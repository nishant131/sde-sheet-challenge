#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0, buy=0, sell;
        for(sell=0; sell<prices.size(); ++sell)
        {
            if(prices[sell] < prices[buy])
                buy=sell;
            else
            {
                if(prices[sell] - prices[buy] > ans)
                    ans = prices[sell] - prices[buy];
            }
        }
        return ans;
    }
};
