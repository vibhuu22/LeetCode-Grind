// Last updated: 7/8/2025, 7:26:45 PM
class Solution {
public:
    map<int,int> mp;
    int findLucky(vector<int>& arr) {
        for(auto i : arr)
        {
            mp[i]++;
        }
        for(auto it = mp.rbegin(); it!=mp.rend();it++)
        {
            if(it->first == it->second) return it->first ;
        }

        return -1;
    }
};