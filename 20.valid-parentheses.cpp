#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };
        for(int i=0; i< s.length(); ++i)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                st.push(s[i]);
                continue;
            }
            if(st.size() == 0 || st.top() != mp[s[i]])
                return false;
            st.pop();
        }
        return st.empty();
    }
};
